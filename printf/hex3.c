/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:52:20 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:40:34 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex43(int *str)
{
	while (str[3] - hexlen(str) > 0)
	{
		write(1, "0", 1);
		str[7] = str[7] + 1;
		str[3] = str[3] - 1;
	}
	if (str[9] == 1 && str[4] == 0 && str[2] > 0)
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		return ;
	}
	if (str[9] == 1 && str[4] == 0)
		return ;
	str[4] == 0 ? write(1, "0", 1) : inthex(str);
	str[7] = str[7] + hexlen(str);
	return ;
}

int		hexlen(int *str)
{
	unsigned int	n;
	int				i;

	i = 0;
	n = str[4];
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	inthex(int *str)
{
	char			hex[100];
	unsigned int	n;

	n = str[4];
	while (n != 0)
	{
		str[12] = n % 16;
		if (str[12] < 10)
			hex[str[11]] = str[12] + 48;
		else
		{
			if (str[13] == 1)
				hex[str[11]] = str[12] + 87;
			else
				hex[str[11]] = str[12] + 55;
		}
		str[11] = str[11] + 1;
		n = n / 16;
	}
	while (str[11] - 1 >= 0)
	{
		write(1, &hex[str[11] - 1], 1);
		str[11] = str[11] - 1;
	}
}
