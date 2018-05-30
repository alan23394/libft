/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:19:41 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:44:27 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	check_bzero()
{
	char	*str;
	char	nstr[8] = {3, 3, 3, 3, 3, 3, 3, 3};
	int		i;

	ft_putstr("ft_bzero:\n");
	str = malloc(8 * sizeof(char));
	bzero(str, 8);
	ft_bzero(nstr, 4);
	str[4] = 5;
	i = 0;
	while (i < 8)
	{
		ft_putchar(nstr[i] + '0');
		ft_putstr(", ");
		ft_putchar(str[i] + '0');
		ft_putchar('\n');
		++i;
	}
	ft_putchar('\n');
}

void	check_memcpy()
{
	char	msg[] = "tomorrow's sunday, we gonna out for picnic!";
	char	dst[100];
	//size_t	nbytes;

	ft_memcpy(dst, msg, sizeof(msg));
	ft_putstr(dst);
	ft_putchar('\n');
}

void	check_strcat()
{
	char		*s1;

	s1 = malloc(50 * sizeof(char));
	ft_putstr("ft_strcat:\n");
	ft_strcat(s1, "This is a ");
	ft_strcat(s1, "strcat example!");
	ft_putstr(s1);
	ft_putchar('\n');
}

void	check_strncat()
{
	char		*s1;

	s1 = malloc(50 * sizeof(char));
	ft_putstr("ft_strncat:\n");
	ft_strncat(s1, "This is a ", 8);
	ft_strncat(s1, "strncat example!", 7);
	ft_putstr(s1);
	ft_putchar('\n');
}

static void	__check_strcmp_print(char *s1, char *s2)
{
	printf("%12s | %-12s| ", s1, s2);
	printf("%5d | %5d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
}

void	check_strcmp()
{
	ft_putstr("ft_strcmp:\n");
	printf("%12s | %-11s | %5s | %5s\n", "String One", "String Two", "LibFT", "LibC");
	printf("-------------+-------------+-------+-------\n");
	__check_strcmp_print("example 1", "example 2");
	__check_strcmp_print("one", "two");
	__check_strcmp_print("aaaaa", "aaaab");
	__check_strcmp_print("bad", "baa");
	__check_strcmp_print("this", "that");
	__check_strcmp_print("", "that");
	__check_strcmp_print("this", "");
	__check_strcmp_print("", "");
}

static void	__check_strncmp_print(char *s1, char *s2)
{
	printf("%12s | %-12s| ", s1, s2);
	printf("%5d | %5d\n", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
}

void	check_strncmp()
{
	ft_putstr("ft_strncmp:\n");
	printf("%12s | %-11s | %5s | %5s\n", "String One", "String Two", "LibFT", "LibC");
	printf("-------------+-------------+-------+-------\n");
	__check_strncmp_print("example 1", "example 2");
	__check_strncmp_print("one", "two");
	__check_strncmp_print("aaaaa", "aaaab");
	__check_strncmp_print("bad", "baa");
	__check_strncmp_print("this", "that");
	__check_strncmp_print("", "that");
	__check_strncmp_print("this", "");
	__check_strncmp_print("", "");
}

static void	__check_atoi_print(char *str)
{
	ft_putstr("Input:	\"");
	ft_putstr(str);
	ft_putchar('\"');
	ft_putchar('\n');
	ft_putstr("Output:	 ");
	ft_putnbr(ft_atoi(str));
	ft_putchar('\n');
}

void	check_atoi()
{
	ft_putstr("ft_atoi:\n");
	__check_atoi_print("1");
	__check_atoi_print("10");
	__check_atoi_print("-100");
	__check_atoi_print("135");
	__check_atoi_print("   10f5");
	__check_atoi_print("-199e9");
	__check_atoi_print("+540");
	__check_atoi_print("   +48e20");
	__check_atoi_print("2147483647");
	__check_atoi_print("-2147483648");
}

void	check_isalpha()
{
	ft_putstr("ft_isalpha:\n");
	ft_putstr("Checking Letters (Expecting all 1's):		");
	ft_putchar(ft_isalpha('a') + 48);
	ft_putchar(ft_isalpha('F') + 48);
	ft_putchar(ft_isalpha('j') + 48);
	ft_putchar(ft_isalpha('i') + 48);
	ft_putchar(ft_isalpha('I') + 48);
	ft_putchar(ft_isalpha('P') + 48);
	ft_putchar(ft_isalpha('q') + 48);
	ft_putchar(ft_isalpha('l') + 48);
	ft_putchar(ft_isalpha('N') + 48);
	ft_putchar(ft_isalpha('d') + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-Letters (Expecting all 0's):	");
	ft_putchar(ft_isalpha('3') + 48);
	ft_putchar(ft_isalpha('[') + 48);
	ft_putchar(ft_isalpha('+') + 48);
	ft_putchar(ft_isalpha('`') + 48);
	ft_putchar(ft_isalpha(',') + 48);
	ft_putchar(ft_isalpha(')') + 48);
	ft_putchar(ft_isalpha(' ') + 48);
	ft_putchar(ft_isalpha('>') + 48);
	ft_putchar(ft_isalpha('#') + 48);
	ft_putchar(ft_isalpha('\t') + 48);
	ft_putchar('\n');
}

void	check_isdigit()
{
	ft_putstr("ft_isdigit:\n");
	ft_putstr("Checking Numbers (Expecting all 1's):		");
	ft_putchar(ft_isdigit('0') + 48);
	ft_putchar(ft_isdigit('1') + 48);
	ft_putchar(ft_isdigit('2') + 48);
	ft_putchar(ft_isdigit('3') + 48);
	ft_putchar(ft_isdigit('4') + 48);
	ft_putchar(ft_isdigit('5') + 48);
	ft_putchar(ft_isdigit('6') + 48);
	ft_putchar(ft_isdigit('7') + 48);
	ft_putchar(ft_isdigit('8') + 48);
	ft_putchar(ft_isdigit('9') + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-Numbers (Expecting all 0's):	");
	ft_putchar(ft_isdigit('a') + 48);
	ft_putchar(ft_isdigit('A') + 48);
	ft_putchar(ft_isdigit('?') + 48);
	ft_putchar(ft_isdigit('g') + 48);
	ft_putchar(ft_isdigit('-') + 48);
	ft_putchar(ft_isdigit('+') + 48);
	ft_putchar(ft_isdigit('`') + 48);
	ft_putchar(ft_isdigit('{') + 48);
	ft_putchar(ft_isdigit(',') + 48);
	ft_putchar(ft_isdigit('Z') + 48);
	ft_putchar('\n');
}

void	check_isalnum()
{
	ft_putstr("ft_isalnum:\n");
	ft_putstr("Checking AlNum (Expecting all 1's):		");
	ft_putchar(ft_isalnum('a') + 48);
	ft_putchar(ft_isalnum('A') + 48);
	ft_putchar(ft_isalnum('1') + 48);
	ft_putchar(ft_isalnum('n') + 48);
	ft_putchar(ft_isalnum('9') + 48);
	ft_putchar(ft_isalnum('u') + 48);
	ft_putchar(ft_isalnum('P') + 48);
	ft_putchar(ft_isalnum('r') + 48);
	ft_putchar(ft_isalnum('5') + 48);
	ft_putchar(ft_isalnum('0') + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-AlNum (Expecting all 1's):		");
	ft_putchar(ft_isalnum('%') + 48);
	ft_putchar(ft_isalnum(' ') + 48);
	ft_putchar(ft_isalnum('[') + 48);
	ft_putchar(ft_isalnum('}') + 48);
	ft_putchar(ft_isalnum('<') + 48);
	ft_putchar(ft_isalnum('`') + 48);
	ft_putchar(ft_isalnum('\n') + 48);
	ft_putchar(ft_isalnum('_') + 48);
	ft_putchar(ft_isalnum('\f') + 48);
	ft_putchar(ft_isalnum('\t') + 48);
	ft_putchar('\n');
}

void	check_isascii()
{
	ft_putstr("ft_isascii:\n");
	ft_putstr("Checking Ascii (Expecting all 1's):		");
	ft_putchar(ft_isascii(0) + 48);
	ft_putchar(ft_isascii(48) + 48);
	ft_putchar(ft_isascii(39) + 48);
	ft_putchar(ft_isascii(120) + 48);
	ft_putchar(ft_isascii(69) + 48);
	ft_putchar(ft_isascii(23) + 48);
	ft_putchar(ft_isascii(127) + 48);
	ft_putchar(ft_isascii(4) + 48);
	ft_putchar(ft_isascii(1) + 48);
	ft_putchar(ft_isascii(13) + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-Ascii (Expecting all 0's):		");
	ft_putchar(ft_isascii(-1) + 48);
	ft_putchar(ft_isascii(128) + 48);
	ft_putchar(ft_isascii(1000) + 48);
	ft_putchar(ft_isascii(-18) + 48);
	ft_putchar(ft_isascii(-127) + 48);
	ft_putchar(ft_isascii(2147483647) + 48);
	ft_putchar(ft_isascii(-2147483648) + 48);
	ft_putchar(ft_isascii(444) + 48);
	ft_putchar(ft_isascii(476476477) + 48);
	ft_putchar(ft_isascii(-34983498) + 48);
	ft_putchar('\n');
}

void	check_isprint()
{
	ft_putstr("ft_isprint:\n");
	ft_putstr("Checking Printable (Expecting all 1's):		");
	ft_putchar(ft_isprint('6') + 48);
	ft_putchar(ft_isprint('a') + 48);
	ft_putchar(ft_isprint('B') + 48);
	ft_putchar(ft_isprint('8') + 48);
	ft_putchar(ft_isprint(')') + 48);
	ft_putchar(ft_isprint('}') + 48);
	ft_putchar(ft_isprint('~') + 48);
	ft_putchar(ft_isprint('\\') + 48);
	ft_putchar(ft_isprint(' ') + 48);
	ft_putchar(ft_isprint('.') + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-Printable (Expecting all 0's):	");
	ft_putchar(ft_isprint(5) + 48);
	ft_putchar(ft_isprint(4) + 48);
	ft_putchar(ft_isprint(31) + 48);
	ft_putchar(ft_isprint(127) + 48);
	ft_putchar(ft_isprint(12) + 48);
	ft_putchar(ft_isprint(1) + 48);
	ft_putchar(ft_isprint(30) + 48);
	ft_putchar(ft_isprint(22) + 48);
	ft_putchar(ft_isprint(9) + 48);
	ft_putchar(ft_isprint(15) + 48);
	ft_putchar('\n');
}

void	check_toupper()
{
	char	*str = "atbdkA3*,&";
	char	*tmp;

	ft_putstr("ft_toupper:\n");
	ft_putstr("Lowercase: ");
	tmp = str;
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
	ft_putstr("Converted: ");
	str = tmp;
	while (*str)
		ft_putchar(ft_toupper(*str++));
	ft_putchar('\n');
}

void	check_tolower()
{
	char	*tmp;
	char	*str = "ATBDKa3*,&";

	ft_putstr("ft_tolower:\n");
	ft_putstr("Uppercase: ");
	tmp = str;
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
	ft_putstr("Converted: ");
	str = tmp;
	while (*str)
		ft_putchar(ft_tolower(*str++));
	ft_putchar('\n');
}
