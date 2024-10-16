# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 17:12:56 by aschmitt          #+#    #+#              #
#    Updated: 2024/07/01 14:50:44 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=  Brainz
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main 

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp 
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all%  

.PHONY: all clean fclean re