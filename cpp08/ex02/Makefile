# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 16:27:40 by lzi-xian          #+#    #+#              #
#    Updated: 2023/08/30 17:48:45 by lzi-xian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutant
OBJS_DIR    =   objs/
MAN_FILES	=	main	
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
