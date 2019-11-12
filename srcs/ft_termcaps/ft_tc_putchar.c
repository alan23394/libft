/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:08:03 by alan              #+#    #+#             */
/*   Updated: 2019/11/12 03:32:39 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Very similar to normal ft_putchar/putc, however it writes to standard IN
** instead of standard OUT. This is because programs that take the output of
** ft_select will be capturing standard out, so I need to be writing to
** standard in - which happens to also be the terminal screen since that's
** where the program is getting it's input text anyway.
*/

int	ft_tc_putchar(int c)
{
	return (write(STDIN_FILENO, &c, 1));
}
