/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unint1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:08:19 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 12:18:54 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	unint3(int *str)
{
	if (str[2] > str[6])
	{
		unint31(str);
		return ;
	}
	else
	{
		unint33(str);
		return ;
	}
}

void	unint21(int *str)
{
	while (str[2] - ucaunt(str[4]) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	return ;
}

void	unint22(int *str)
{
	while (str[6] - ucaunt(str[4]) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	return ;
}

void	unint2(int *str)
{
	if (str[2] > str[6])
	{
		unint21(str);
		return ;
	}
	else
	{
		unint22(str);
		return ;
	}
}

void	unint(va_list argprtr, int *str)
{
	str[4] = va_arg(argprtr, int);
	if (str[3] > ucaunt(str[4]))
		str[6] = ucaunt(str[4]) + (str[3] - ucaunt(str[4]));
	else
		str[6] = ucaunt(str[4]);
	if (str[9] == 1 && str[4] == 0 && str[1] != 1)
	{
		unint4(str);
		return ;
	}
	if (str[0] == 1 && str[1] != 1 && str[3] <= 0 && str[9] != 1)
	{
		unint2(str);
		return ;
	}
	if (str[1] == 1)
	{
		unint3(str);
		return ;
	}
	if (str[1] == 0)
	{
		unint4(str);
		return ;
	}
}
