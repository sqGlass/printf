/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:58:09 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 11:59:56 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	st3(int *str, char *s)
{
	if (str[2] > str[6])
	{
		st31(str, s);
		return ;
	}
	else
	{
		st33(str, s);
		return ;
	}
}

void	st41(int *str, char *s)
{
	while (str[2] - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	while (str[8] < str[6])
	{
		write(1, &s[str[8]], 1);
		str[7] = str[7] + 1;
		str[8] = str[8] + 1;
	}
}

void	st43(int *str, char *s)
{
	while (str[8] < str[6])
	{
		write(1, &s[str[8]], 1);
		str[7] = str[7] + 1;
		str[8] = str[8] + 1;
	}
}

void	st4(int *str, char *s)
{
	if (str[2] > str[6])
	{
		st41(str, s);
		return ;
	}
	else
	{
		st43(str, s);
		return ;
	}
}

void	st(va_list argprtr, int *str)
{
	char *s;

	s = va_arg(argprtr, char*);
	if (s == NULL)
		s = "(null)";
	if (ft_stlen(s) > str[3] && str[3] != 0)
		str[6] = str[3];
	if (ft_stlen(s) <= str[3] || str[3] <= 0)
		str[6] = ft_stlen(s);
	if (str[3] == 0 && str[14] == 1)
		str[6] = 0;
	if (str[1] == 1)
	{
		st3(str, s);
		return ;
	}
	if (str[1] == 0)
	{
		st4(str, s);
		return ;
	}
}
