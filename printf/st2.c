/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:00:06 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 12:04:06 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	st31(int *str, char *s)
{
	while (str[8] < str[6])
	{
		write(1, &s[str[8]], 1);
		str[7] = str[7] + 1;
		str[8] = str[8] + 1;
	}
	while (str[2] > str[6])
	{
		write(1, " ", 1);
		str[7] = str[7] + 1;
		str[2] = str[2] - 1;
	}
	return ;
}

void	st33(int *str, char *s)
{
	while (str[8] < str[6])
	{
		write(1, &s[str[8]], 1);
		str[7] = str[7] + 1;
		str[8] = str[8] + 1;
	}
	return ;
}

int		ft_stlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
