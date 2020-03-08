/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 00:44:56 by abarnett          #+#    #+#             */
/*   Updated: 2020/03/07 00:45:37 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

/*
** Returns the atoi value, and also seeks the string forward.
*/

int	ft_parse_num(const char **str)
{
	int			i;
	int			flag;
	const char	*cur;

	i = 0;
	flag = 1;
	cur = *str;
	while (ft_isspace(*cur))
		cur++;
	if (*cur == '-' || *cur == '+')
		flag = (*cur++ == '-' ? -1 : 1);
	while (ft_isdigit(*cur))
		i = (i * 10) + (*cur++ - 48);
	*str = cur;
	return (i * flag);
}
