# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sglass <sglass@student.21-school.>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 11:27:33 by sglass            #+#    #+#              #
#    Updated: 2020/11/23 15:11:31 by sglass           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ch1.c hex1.c hex2.c hex3.c id1.c id2.c id3.c obnulatory.c point1.c point2.c point3.c specy.c st1.c st2.c unint1.c unint2.c unint3.c reshaly.c
OBJS	= ${SRCS:.c=.o}

CFLAGS 	= -Wall -Wextra -Werror -Iincludes

NAME	= libftprintf.a

GCC		= gcc

AR		= ar

RC		= rc

RM		= rm -f

FT_H  	= ft_printf.h


all:	${NAME}

.c.o:
			${GCC} ${CFLAGS} -c  $< -o ${<:.c=.o}



$(NAME):	${OBJS}

			${AR} ${RC} ${NAME} ${OBJS}
			${AR} ${RC} ${NAME} ${FT_H}






clean:
			${RM} ${OBJS}



fclean:		clean
			${RM} ${NAME}


re:			fclean all
