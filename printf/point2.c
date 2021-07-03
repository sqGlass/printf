/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:28:18 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 11:31:17 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	point41(int *str, unsigned long long int a)
{
	while (str[2] - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	if (str[9] == 1 && a == 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	while (str[3] - pointlen(str, a) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	a == 0 ? write(1, "0x0", 3) : intpoint(str, a);
	str[7] = str[7] + pointlen(str, a);
	return ;
}

void	point4(int *str, unsigned long long int a)
{
	if (str[2] > str[6])
	{
		point41(str, a);
		return ;
	}
	else
	{
		point43(str, a);
		return ;
	}
}

void	point33(int *str, unsigned long long int a)
{
	if (str[9] == 1 && a == 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	while (str[6] - pointlen(str, a))
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	a == 0 ? write(1, "0x0", 3) : intpoint(str, a);
	str[7] = str[7] + pointlen(str, a);
	return ;
}

void	point300(int *str, unsigned long long int a)
{
	(void)a;
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	write(1, " ", 1);
	str[7] = str[7] + 1;
	return ;
}

void	point31(int *str, unsigned long long int a)
{
	if (str[3] > pointlen(str, a))
	{
		while (str[3] - pointlen(str, a) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[3] = str[3] - 1;
		}
	}
	if (str[9] == 1 && a == 0)
	{
		point300(str, a);
		return ;
	}
	a == 0 ? write(1, "0x0", 3) : intpoint(str, a);
	str[7] = str[7] + pointlen(str, a);
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}
