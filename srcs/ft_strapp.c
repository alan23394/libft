/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 20:38:30 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 11:59:32 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** This function appends a character to a string by changing the null terminator
** to a character, and then setting a new null terminator after the character.
** It is assumed that you have enough memory space for this.
*/

void	ft_strapp(char *dst, char c)
{
	if (!dst)
		return ;
	while (*dst)
		dst++;
	*dst++ = c;
	*dst = '\0';
}
