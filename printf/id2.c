/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:00:55 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:42:46 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	id41(int *str)
{
	while (str[2] - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	while (str[3] - caunt(str[4]) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	if (str[9] == 1 && str[4] == 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	ft_putnbr(str[4]);
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id32(int *str)
{
	write(1, "-", 1);
	if (caunt(str[4]) > str[3])
		str[2] = str[2] + 1;
	if (str[3] > caunt(str[4]) - 1)
	{
		while (str[3] - (caunt(str[4]) - 1) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[3] = str[3] - 1;
		}
	}
	ft_putnbr(str[4] * -1);
	str[7] = str[7] + caunt(str[4]);
	while ((str[2] - 1) > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}

void	id33(int *str)
{
	while (str[6] - caunt(str[4]))
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	if (str[9] == 1 && str[4] == 0 && str[2] == 0)
		return ;
	if (str[9] == 1 && str[4] == 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	ft_putnbr(str[4]);
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id34(int *str)
{
	write(1, "-", 1);
	if (caunt(str[4]) > str[3])
		str[6] = str[6] - 1;
	while ((str[6] + 1) - caunt(str[4]))
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	ft_putnbr(str[4] * -1);
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id3(int *str)
{
	if (str[2] > str[6])
	{
		if (str[4] >= 0)
			id31(str);
		else
			id32(str);
		return ;
	}
	else
	{
		if (str[4] >= 0)
		{
			id33(str);
			return ;
		}
		else
		{
			id34(str);
			return ;
		}
	}
}
