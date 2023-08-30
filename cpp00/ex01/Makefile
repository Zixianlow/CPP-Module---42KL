# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 19:34:04 by lzi-xian          #+#    #+#              #
#    Updated: 2023/08/30 16:53:14 by lzi-xian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
OBJS_DIR    =   objs/
MAN_FILES	=	contact			\
				phonebook		\
				main
SRCS        =	$(addsuffix .cpp, $(MAN_FILES))
OBJS 		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(MAN_FILES)))
RMRF		=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
GCC			=	c++

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