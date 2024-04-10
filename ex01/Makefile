# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:30:40 by aschmitt          #+#    #+#              #
#    Updated: 2024/04/10 12:31:04 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all	:	$(NAME)

$(NAME):
		$(CC) $(FLAGS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean:
		$(RM) $(NAME)

re: clean all

.PHONY: all clean re