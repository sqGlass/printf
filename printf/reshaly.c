/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reshaly.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:30:08 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 15:37:44 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_help(int *str, const char *s, va_list argprtr)
{
	str[10] = str[10] + 1;
	ft_reshala(str, s, argprtr);
	if (s[str[10] + 1] != '\0')
	{
		str[10] = str[10] + 1;
		return (-1);
	}
	else
		return (1);
}

int		ft_printf(const char *s, ...)
{
	int		str[15];
	va_list	argprtr;

	nol(str);
	va_start(argprtr, s);
	while (s[str[10]] != '\0')
	{
		if (s[str[10]] == '%')
		{
			if (ft_help(str, s, argprtr) == 1)
			{
				va_end(argprtr);
				return (str[7]);
			}
		}
		if (s[str[10]] == '%')
			continue ;
		write(1, &s[str[10]], 1);
		str[7] = str[7] + 1;
		str[10] = str[10] + 1;
	}
	va_end(argprtr);
	return (str[7]);
}

void	ft_reshala(int *str, const char *s, va_list argprtr)
{
	int	i;

	i = 0;
	if (s[str[10]] == '0' || s[str[10]] == '-')
		flag(str, s);
	if ((s[str[10]] >= '1' && s[str[10]] <= '9') ||
	(s[str[10]] == '*' && s[str[10] - 1] != '.'))
		wid(str, s, argprtr);
	if (s[str[10]] == '.')
	{
		str[10] = str[10] + 1;
		acc(str, s, argprtr);
	}
	if (s[str[10]] != 'd' && s[str[10]] != 'i' && s[str[10]] != 'u' &&
		s[str[10]] != 'c'
		&& s[str[10]] != 's' && s[str[10]] != 'X' && s[str[10]] != 'x' &&
		s[str[10]] != 'p' && s[str[10]] != '%')
		return ;
	sorter(str, s, argprtr);
}

void	sorter(int *str, const char *s, va_list argprtr)
{
	if (s[str[10]] == 'd' || s[str[10]] == 'i')
		id(argprtr, str);
	if (s[str[10]] == 'u')
		unint(argprtr, str);
	if (s[str[10]] == 'c')
		ch(argprtr, str, s);
	if (s[str[10]] == 's')
		st(argprtr, str);
	if (s[str[10]] == 'X')
		bxex(argprtr, str);
	if (s[str[10]] == 'x')
	{
		str[13] = 1;
		bxex(argprtr, str);
	}
	if (s[str[10]] == 'p')
		point(argprtr, str);
	if (s[str[10]] == '%')
		ch(argprtr, str, s);
	zachistka(str);
}

void	ft_putnbr(int n)
{
	int j;
	int mod;
	int nu;

	j = 1;
	if (n == -2147483648)
		write(1, "2147483648", 10);
	nu = n;
	if (n < 0 && n != -2147483648)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	while (nu / 10 != 0 && n != -2147483648)
	{
		nu = nu / 10;
		j = j * 10;
	}
	while (j != 0 && n != -2147483648)
	{
		mod = n / j + 48;
		write(1, &mod, 1);
		n = n % j;
		j = j / 10;
	}
}
