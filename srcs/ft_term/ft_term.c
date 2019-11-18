/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 23:03:27 by alan              #+#    #+#             */
/*   Updated: 2019/11/18 11:59:23 by alan             ###   ########.fr       */
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

static struct s_terms	*terminal_store(struct s_terms **terms)
{
	static struct s_terms	*hold = 0;

	if (!terms)
		return (hold);
	else
		hold = *terms;
	return (0);
}

/*
** Initialize terminal struct, and run passed function on new term
**
** Parameter is a function pointer who will be passed the new struct termios,
** and should make all changes to the new terminal that you would like for your
** application. The new terminal is not applied, you must do that with
** ft_term_switch_new(). This is a void function, I imagine it doesn't do
** enough by itself to warrant checking for failure. If I change my mind later,
** it'll be easy to add.
**
** Returns 0 on success, 1 on failure. If it failed, all allocated memory will
** be freed. I assume you'd want to quit the program if the terminal couldn't
** have it's attributes recieved.
*/

int						init_terms(void (setup_new_term(struct termios *term)))
{
	struct s_terms	*terms;

	terms = (struct s_terms *)ft_memalloc(sizeof(struct s_terms));
	if (!terms)
	{
		return (0);
	}
	if (tcgetattr(STDIN_FILENO, &(terms->old_term)) != 0)
	{
		PRINT_DEBUG("tcgetattr failed");
		ft_memdel((void **)terms);
		return (1);
	}
	ft_memcpy(&(terms->new_term), &(terms->old_term), sizeof(struct termios));
	setup_new_term(&(terms->new_term));
	(void)terminal_store(&terms);
	return (0);
}

/*
** Frees the terminal in the terminal_store, if it exists.
** Once freed, it resets the terminal holder to the address of the terms
** variable (since ft_memdel set terms to 0, this effectively clears the
** holder).
*/

void					delete_terms(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (terms)
	{
		ft_memdel((void **)&terms);
		terminal_store(&terms);
	}
}

/*
** This function tries to use tcsetattr to flash the old terminal settings.
** It returns -1 if there are no terminal settings saved.
** It returns 1 if tcsetattr fails.
** It returns 0 on success.
*/

int						ft_term_switch_old(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (!terms)
	{
		return (-1);
	}
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &(terms->old_term)) != 0)
	{
		PRINT_DEBUG("tcsetattr failed");
		return (1);
	}
	return (0);
}

/*
** This function tries to use tcsetattr to flash the new terminal settings.
** It returns -1 if there are no terminal settings saved.
** It returns 1 if tcsetattr fails.
** It returns 0 on success.
*/

int						ft_term_switch_new(void)
{
	struct s_terms	*terms;

	terms = terminal_store(0);
	if (!terms)
	{
		return (-1);
	}
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &(terms->new_term)) != 0)
	{
		PRINT_DEBUG("tcsetattr failed");
		return (1);
	}
	return (0);
}
