# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 19:34:04 by lzi-xian          #+#    #+#              #
#    Updated: 2023/05/02 18:52:26 by lzi-xian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account
OBJS_DIR    =   objs/
MAN_FILES	=	Account			\
				tests
SRCS        =	$(addsuffix .cpp, $(MAN_FILES))
OBJS 		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(MAN_FILES)))
RMRF		=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
GCC			=	g++

all:
	@mkdir -p $(OBJS_DIR)
	@make $(NAME)

$(OBJS_DIR)%.o:	%.cpp
	@$(GCC) -c $< -o $@

$(NAME):	${OBJS}
	${GCC} ${CFLAGS} ${OBJS} -o $(NAME)
	
clean:
	${RMRF} ${OBJS} $(OBJS_DIR)

fclean:	clean
	${RMRF}	$(NAME)

re:	fclean all