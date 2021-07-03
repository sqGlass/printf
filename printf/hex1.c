/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:33:14 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 11:49:01 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex3(int *str)
{
	if (str[2] > str[6])
	{
		hex31(str);
		return ;
	}
	else
	{
		hex33(str);
		return ;
	}
}

void	hex21(int *str)
{
	while (str[2] - hexlen(str) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	return ;
}

void	hex22(int *str)
{
	while (str[6] - hexlen(str) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[6] = str[6] - 1;
	}
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	return ;
}

void	hex2(int *str)
{
	if (str[2] > str[6])
	{
		hex21(str);
		return ;
	}
	else
	{
		hex22(str);
		return ;
	}
}

void	bxex(va_list argprtr, int *str)
{
	str[4] = va_arg(argprtr, int);
	if (str[3] > hexlen(str))
		str[6] = hexlen(str) + (str[3] - hexlen(str));
	else
		str[6] = hexlen(str);
	if (str[9] == 1 && str[4] == 0 && str[1] != 1)
	{
		hex4(str);
		return ;
	}
	if (str[0] == 1 && str[1] != 1 && str[3] <= 0 && str[9] != 1)
	{
		hex2(str);
		return ;
	}
	if (str[1] == 1)
	{
		hex3(str);
		return ;
	}
	if (str[1] == 0)
	{
		hex4(str);
		return ;
	}
}
