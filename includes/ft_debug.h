/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 06:52:56 by alan              #+#    #+#             */
/*   Updated: 2019/11/16 07:42:57 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEBUG_H
# define FT_DEBUG_H

# ifdef DEBUG_PRINT_ON

#  include "ft_printf.h"

#  define ERROR_FORMAT(str) "(%s:%s): %s\n", __FILE__, __func__, str
#  define PRINT_DEBUG(str) ft_printfd(STDERR_FILENO, ERROR_FORMAT(str))

# else

/*
** This is set to void 0, because the compiler will complain of an expected
** expression before a semicolon if there isn't anything. I also have to leave
** the semicolon on the line, because norm will complain that the file may not
** compile for some reasons if there are any lines without semicolons.
*/

#  define PRINT_DEBUG(str) (void)0

# endif

#endif
