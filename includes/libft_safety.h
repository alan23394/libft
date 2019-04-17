/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_safety.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:02:20 by alan              #+#    #+#             */
/*   Updated: 2019/04/17 12:03:35 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A macro for enabling/disabling safety in some functions. A list of supported
** functions is as follows:
**
** ft_strlen
** 	removes segfault on passed null string, returns 0 instead
*/

#ifndef LIBFT_SAFETY
# define LIBFT_SAFETY

# define LIBFT_SAFE

#endif
