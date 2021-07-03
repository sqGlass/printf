/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:42:22 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:41:39 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	id(va_list argprtr, int *str)
{
	str[4] = va_arg(argprtr, int);
	if (str[3] > caunt(str[4]))
		str[6] = caunt(str[4]) + (str[3] - caunt(str[4]));
	else
		str[6] = caunt(str[4]);
	if (str[9] == 1 && str[4] == 0 && str[1] != 1)
	{
		id4(str);
		return ;
	}
	if (str[0] == 1 && str[1] != 1 && str[3] <= 0 && str[9] != 1)
	{
		id2(str);
		return ;
	}
	if (str[1] == 1)
		id3(str);
	if (str[1] == 0)
		id4(str);
	return ;
}

void	id4(int *str)
{
	if (str[2] > str[6])
	{
		if (str[4] >= 0)
			id41(str);
		else
			id42(str);
		return ;
	}
	else
	{
		if (str[4] >= 0)
			id43(str);
		else
			id44(str);
		return ;
	}
}

void	id44(int *str)
{
	write(1, "-", 1);
	while (str[3] - (caunt(str[4]) - 1) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	ft_putnbr(str[4] * -1);
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id43(int *str)
{
	while (str[3] - caunt(str[4]) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	if (str[9] == 1 && str[4] == 0 && str[2] == 1)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	if (str[9] == 1 && str[4] == 0)
		return ;
	ft_putnbr(str[4]);
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id42(int *str)
{
	if (caunt(str[4]) > str[3])
		str[2] = str[2] + 1;
	while ((str[2] - 1) - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	write(1, "-", 1);
	while (str[3] - (caunt(str[4]) - 1) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	ft_putnbr(str[4] * -1);
	str[7] = str[7] + caunt(str[4]);
	return ;
}
