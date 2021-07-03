/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:41:46 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 15:42:52 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag(int *str, const char *s)
{
	while (s[str[10]] == '0' || s[str[10]] == '-')
	{
		if (s[str[10]] == '0')
			str[0] = 1;
		if (s[str[10]] == '-')
			str[1] = 1;
		str[10] = str[10] + 1;
	}
}

void	wid(int *str, const char *s, va_list argprtr)
{
	if (s[str[10]] == '*')
	{
		str[2] = va_arg(argprtr, int);
		if (str[2] < 0)
		{
			str[1] = 1;
			str[2] = str[2] * -1;
		}
		str[10] = str[10] + 1;
		return ;
	}
	while (s[str[10]] >= '0' && s[str[10]] <= '9')
	{
		str[2] = str[2] * 10 + (s[str[10]] - '0');
		str[10] = str[10] + 1;
	}
}

void	acc(int *str, const char *s, va_list argprtr)
{
	str[14] = 1;
	if (s[str[10]] == '*')
	{
		str[3] = va_arg(argprtr, int);
		if (str[3] == 0)
			str[9] = 1;
		str[10] = str[10] + 1;
		return ;
	}
	while (s[str[10]] >= '0' && s[str[10]] <= '9')
	{
		str[3] = str[3] * 10 + (s[str[10]] - '0');
		str[10] = str[10] + 1;
	}
	if (str[3] == 0)
		str[9] = 1;
}

void	id21(int *str)
{
	if (str[4] < 0)
	{
		write(1, "-", 1);
		while (str[2] - caunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[2] = str[2] - 1;
		}
		ft_putnbr(str[4] * -1);
	}
	else
	{
		while (str[2] - caunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[2] = str[2] - 1;
		}
		if (str[9] == 1 && str[4] == 0)
			return ;
		ft_putnbr(str[4]);
	}
	str[7] = str[7] + caunt(str[4]);
	return ;
}
