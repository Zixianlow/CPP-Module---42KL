# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 19:34:04 by lzi-xian          #+#    #+#              #
#    Updated: 2023/03/23 19:36:57 by lzi-xian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		= 	$(SRCS:.cpp=.o)
RMRF		=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
GCC			=	g++


all:	$(NAME)

$(NAME):	${OBJS}
	${GCC} ${CFLAGS} ${OBJS} -o $(NAME)
	
clean:
	${RMRF} ${OBJS}

fclean:	clean
	${RMRF}	$(NAME)

re:	fclean all