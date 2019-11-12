/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:00:41 by abarnett          #+#    #+#             */
/*   Updated: 2019/11/12 03:25:02 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Some rationale:
**
** I used to have this function be void, and take a character. Then when I ran
** into tputs and found out it needed an int function that takes an int
** character to print, I thought a bit harder about why it was that way, with
** the knowledge I had gained since the piscine when we wrote ft_putchar for
** the first time.
** Well, it's an int function to tell you the return value of the write, which
** makes sense as basically every printing function returns the amount of bytes
** written (same with reading functons). And I figure it takes an int, because
** argument promotion would turn a character into an int anyway, so there's no
** real reason to send in char and make the compiler do more work.
** I do wonder, since write takes a void pointer, if it only writes this
** character when the first byte is the smallest chunk (character portion) on a
** little endian machine, and otherwise writes a null terminator, since the
** character would be at the end of the int with zeros leading up to it.
*/

int	ft_putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
