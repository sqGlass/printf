/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:31:36 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 13:49:28 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	point43(int *str, unsigned long long int a)
{
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

void	intpoint(int *str, unsigned long long int a)
{
	char					point[100];
	unsigned long long int	n;

	n = a;
	while (n != 0)
	{
		str[12] = n % 16;
		if (str[12] < 10)
			point[str[11]] = str[12] + 48;
		else
			point[str[11]] = str[12] + 87;
		str[11] = str[11] + 1;
		n = n / 16;
	}
	write(1, "0x", 2);
	while (str[11] - 1 >= 0)
	{
		write(1, &point[str[11] - 1], 1);
		str[11] = str[11] - 1;
	}
}

int		pointlen(int *str, unsigned long long int a)
{
	unsigned long long int	n;
	int						i;

	(void)str;
	i = 0;
	n = a;
	if (n == 0)
		return (3);
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	i = i + 2;
	return (i);
}
