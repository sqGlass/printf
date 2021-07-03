/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:47:41 by sglass            #+#    #+#             */
/*   Updated: 2020/11/23 15:43:10 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_stlen(const char *s);
void	ft_putnbr(int n);
int		hexlen(int *str);
int		pointlen(int *str, unsigned long long int a);
void	intpoint(int *str, unsigned long long int a);
void	inthex(int *str);
void	ft_uputnbr(int n);
int		caunt(int n);
void	id21(int *str);
void	id22(int *str);
void	id2(int *str);
void	id300(int *str);
void	id31(int *str);
void	id32(int *str);
void	id33(int *str);
void	id34(int *str);
void	id3(int *str);
void	id41(int *str);
void	id42(int *str);
void	id43(int *str);
void	id44(int *str);
void	id4(int *str);
void	id(va_list argprtr, int *str);
int		ucaunt(int m);
void	unint43(int *str);
void	unint41(int *str);
void	unint4(int *str);
void	unint33(int *str);
void	unint300(int *str);
void	unint31(int *str);
void	unint3(int *str);
void	unint21(int *str);
void	unint22(int *str);
void	unint2(int *str);
void	unint(va_list argprtr, int *str);
void	ch41(int *str);
void	ch31(int *str);
void	chkostnul(int *str);
void	ch(va_list argprtr, int *str, const char *s);
void	st31(int *str, char *s);
void	st33(int *str, char *s);
void	st3(int *str, char *s);
void	st41(int *str, char *s);
void	st43(int *str, char *s);
void	st4(int *str, char *s);
void	st(va_list argprtr, int *str);
void	hex43(int *str);
void	hex41(int *str);
void	hex4(int *str);
void	hex33(int *str);
void	hex300(int *str);
void	hex31(int *str);
void	hex3(int *str);
void	hex21(int *str);
void	hex22(int *str);
void	hex2(int *str);
void	bxex(va_list argprtr, int *str);
void	point43(int *str, unsigned long long int a);
void	point41(int *str, unsigned long long int a);
void	point4(int *str, unsigned long long int a);
void	point33(int *str, unsigned long long int a);
void	point300(int *str, unsigned long long int a);
void	point31(int *str, unsigned long long int a);
void	point3(int *str, unsigned long long int a);
void	point21(int *str, unsigned long long int a);
void	point22(int *str, unsigned long long int a);
void	point2(int *str, unsigned long long int a);
void	point(va_list argprtr, int *str);
void	nol(int *a);
void	flag(int *str, const char *s);
void	wid(int *str, const char *s, va_list argprtr);
void	acc(int *str, const char *s, va_list argprtr);
void	zachistka(int *a);
void	sorter(int *str, const char *s, va_list argprtr);
void	ft_reshala(int *str, const char *s, va_list argprtr);
void	ft_reshala(int *str, const char *s, va_list argprtr);
#endif
