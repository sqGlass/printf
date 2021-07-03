/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:09:22 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 11:16:50 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	id22(int *str)
{
	if (str[4] < 0)
	{
		write(1, "-", 1);
		while (str[6] - caunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[6] = str[6] - 1;
		}
		ft_putnbr(str[4] * -1);
	}
	else
	{
		while (str[6] - caunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[6] = str[6] - 1;
		}
		if (str[9] == 1 && str[4] == 0)
			return ;
		ft_putnbr(str[4]);
	}
	str[7] = str[7] + caunt(str[4]);
	return ;
}

void	id2(int *str)
{
	if (str[2] > str[6])
	{
		id21(str);
		return ;
	}
	else
	{
		id22(str);
		return ;
	}
}

void	id300(int *str)
{
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

void	id31(int *str)
{
	if (str[3] > caunt(str[4]))
	{
		while (str[3] - caunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[3] = str[3] - 1;
		}
	}
	if (str[9] == 1 && str[4] == 0)
	{
		id300(str);
		return ;
	}
	ft_putnbr(str[4]);
	str[7] = str[7] + caunt(str[4]);
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}

int		caunt(int n)
{
	int i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}
