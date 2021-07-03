/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:49:59 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:38:24 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex41(int *str)
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
	while (str[3] - hexlen(str) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	return ;
}

void	hex4(int *str)
{
	if (str[2] > str[6])
	{
		hex41(str);
		return ;
	}
	else
	{
		hex43(str);
		return ;
	}
}

void	hex33(int *str)
{
	while (str[6] - hexlen(str))
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
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	return ;
}

void	hex300(int *str)
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

void	hex31(int *str)
{
	if (str[3] > hexlen(str))
	{
		while (str[3] - hexlen(str) > 0)
		{
			write(1, "0", 1);
			str[7] = str[7] + 1;
			str[3] = str[3] - 1;
		}
	}
	if (str[9] == 1 && str[4] == 0)
	{
		hex300(str);
		return ;
	}
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}
