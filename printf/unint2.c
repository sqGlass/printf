/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unint2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:19:17 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:44:48 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	unint41(int *str)
{
	while (str[2] - str[6] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	if (str[9] == 1 && str[4] == 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	while (str[3] - ucaunt(str[4]) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	return ;
}

void	unint4(int *str)
{
	if (str[2] > str[6])
	{
		unint41(str);
		return ;
	}
	else
	{
		unint43(str);
		return ;
	}
}

void	unint33(int *str)
{
	while (str[6] - ucaunt(str[4]))
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
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	return ;
}

void	unint300(int *str)
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

void	unint31(int *str)
{
	if (str[3] > ucaunt(str[4]))
	{
		while (str[3] - ucaunt(str[4]) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[3] = str[3] - 1;
		}
	}
	if (str[9] == 1 && str[4] == 0)
	{
		unint300(str);
		return ;
	}
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}
