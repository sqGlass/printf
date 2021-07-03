/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unint3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:21:59 by sglass            #+#    #+#             */
/*   Updated: 2020/11/24 11:46:16 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ucaunt(int m)
{
	int				i;
	unsigned int	n;

	n = m;
	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	unint43(int *str)
{
	while (str[3] - ucaunt(str[4]) > 0)
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
	ft_uputnbr(str[4]);
	str[7] = str[7] + ucaunt(str[4]);
	return ;
}

void	ft_uputnbr(int n)
{
	unsigned int j;
	unsigned int mod;
	unsigned int nu;

	j = 1;
	nu = n;
	while (nu / 10 != 0)
	{
		nu = nu / 10;
		j = j * 10;
	}
	while (j != 0)
	{
		mod = n / j + 48;
		write(1, &mod, 1);
		n = n % j;
		j = j / 10;
	}
}
