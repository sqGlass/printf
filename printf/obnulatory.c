/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obnulatory.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:45:12 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 13:46:33 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	nol(int *a)
{
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	a[4] = 0;
	a[5] = 0;
	a[6] = 0;
	a[7] = 0;
	a[8] = 0;
	a[9] = 7;
	a[10] = 0;
	a[11] = 0;
	a[12] = 0;
	a[13] = 0;
	a[14] = 0;
}

void	zachistka(int *a)
{
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	a[4] = 0;
	a[5] = 0;
	a[6] = 0;
	a[8] = 0;
	a[9] = 7;
	a[11] = 0;
	a[12] = 0;
	a[13] = 0;
	a[14] = 0;
}
