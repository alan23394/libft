/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 23:03:27 by alan              #+#    #+#             */
/*   Updated: 2019/11/16 07:38:02 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"
#include "ft_debug.h"
#include "ft_mem.h"

/*
** includes for tcgetattr and tcsetattr
*/

#include <termios.h>
#include <unistd.h>

/*
** If you pass in a terminal struct, it will set the internal static variable.
** MAKE SURE YOU FREE THE INTERNAL STRUCT BEFORE YOU DO THIS.
** If you pass in NULL, it will return a pointer the internal struct.
*/

static struct s_terms	*terminal_store(struct s_terms *terms)
{
	static struct s_terms	*hold = 0;

	if (!terms)
		return (hold);
	else
		hold = terms;
	return (0);
}

/*
** Initialize terminal struct, and run passed function on new term
**
** Parameter is a function pointer who will be passed the new struct termios,
** and should make all changes to the new terminal that you would like for your
** application. The new terminal is not applied, you must do that with
** ft_term_switch_new().
**
** Returns 0 on success, 1 on failure.
*/

int						init_terms(int (setup_new_term(struct termios *term)))
{
	struct s_terms	*terms;

	terms = (struct s_terms *)ft_memalloc(sizeof(struct s_terms));
	if (!terms)
	{
		return (0);
	}
	(void)terminal_store(terms);
	if (tcgetattr(STDIN_FILENO, &(terms->old_term)) != 0)
	{
		PRINT_DEBUG("tcgetattr failed");
		return (1);
	}
	PRINT_DEBUG("Saved old terminal attributes");
	ft_memcpy(&(terms->new_term), &(terms->old_term), sizeof(struct termios));
	PRINT_DEBUG("Duplicated old attributes to new attributes");
	if (setup_new_term(&(terms->new_term)) != 0)
	{
		PRINT_DEBUG("New term setup function failed");
		return (1);
	}
	PRINT_DEBUG("New terminal has been set up");
	return (0);
}

/*
** Frees the terminal in the terminal_store, if it exists.
*/

void					delete_terms(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (terms)
	{
		ft_memdel((void **)&terms);
		PRINT_DEBUG("Deleted terminals successfully.");
	}
}


int						ft_term_switch_old(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (!terms)
	{
		return (1);
	}
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &(terms->old_term)) != 0)
	{
		PRINT_DEBUG("tcsetattr failed");
		return (1);
	}
	return (0);
}

int						ft_term_switch_new(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (!terms)
	{
		return (1);
	}
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &(terms->new_term)) != 0)
	{
		PRINT_DEBUG("tcsetattr failed");
		return (1);
	}
	return (0);
}
