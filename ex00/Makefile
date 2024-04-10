# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:25:32 by aschmitt          #+#    #+#              #
#    Updated: 2024/04/10 15:15:14 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all	:	$(NAME)

$(NAME):
		$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean re