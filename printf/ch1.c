/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:04:31 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 12:07:59 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ch41(int *str)
{
	char c;

	c = str[4];
	while (str[2] - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	write(1, &c, 1);
	str[7] = str[7] + 1;
	return ;
}

void	ch31(int *str)
{
	char c;

	c = str[4];
	write(1, &c, 1);
	str[7] = str[7] + 1;
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}

void	chkostnul(int *str)
{
	char c;

	c = str[4];
	while (str[2] > str[6])
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	write(1, &c, 1);
	str[7] = str[7] + 1;
	return ;
}

void	ch(va_list argprtr, int *str, const char *s)
{
	if (s[str[10]] == 37)
		str[4] = 37;
	else
		str[4] = va_arg(argprtr, int);
	str[6] = 1;
	if (str[1] == 0 && str[4] == 37 && str[0] == 1)
	{
		chkostnul(str);
		return ;
	}
	if (str[1] == 1)
	{
		ch31(str);
		return ;
	}
	if (str[1] == 0)
	{
		ch41(str);
		return ;
	}
}
