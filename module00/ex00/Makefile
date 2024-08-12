# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:25:32 by aschmitt          #+#    #+#              #
#    Updated: 2024/08/12 14:01:24 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		= megaphone.cpp

all	:	$(NAME)

$(NAME): Makefile
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: 
		$(RM) $(NAME)

re: clean all

.PHONY: all clean re