/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:58 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 11:28:05 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	point(va_list argprtr, int *str)
{
	unsigned long long int a;

	a = va_arg(argprtr, unsigned long long int);
	if (str[3] > pointlen(str, a))
		str[6] = pointlen(str, a) + (str[3] - pointlen(str, a));
	else
		str[6] = pointlen(str, a);
	if (str[9] == 1 && str[4] == 0 && str[1] != 1)
		point4(str, a);
	if (str[0] == 1 && str[1] != 1 && str[3] <= 0)
		point2(str, a);
	if (str[1] == 1)
		point3(str, a);
	if (str[1] == 0)
		point4(str, a);
	return ;
}

void	point3(int *str, unsigned long long int a)
{
	if (str[2] > str[6])
	{
		point31(str, a);
		return ;
	}
	else
	{
		point33(str, a);
		return ;
	}
}

void	point21(int *str, unsigned long long int a)
{
	while (str[2] - pointlen(str, a) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	a == 0 ? write(1, "0x0", 3) : intpoint(str, a);
	str[7] = str[7] + pointlen(str, a);
	return ;
}

void	point22(int *str, unsigned long long int a)
{
	while (str[6] - pointlen(str, a) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	a == 0 ? write(1, "0x0", 3) : intpoint(str, a);
	str[7] = str[7] + pointlen(str, a);
	return ;
}

void	point2(int *str, unsigned long long int a)
{
	if (str[2] > str[6])
	{
		point21(str, a);
		return ;
	}
	else
	{
		point22(str, a);
		return ;
	}
}
