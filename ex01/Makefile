# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:30:40 by aschmitt          #+#    #+#              #
#    Updated: 2024/04/11 11:07:29 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME	= PhoneBook
	
# CC		= c++
# FLAGS	= -Wall -Wextra -Werror -std=c++98
# RM		= rm -rf
# OBJ_DIR	= obj

# SRC		= main.cpp Contact.cpp PhoneBook.cpp
# OBJ		= $(patsubst .c,$(OBJ_DIR)%.o,$(SRC))
# HEADER	= Contact.hpp PhoneBook.hpp

# all	:	$(NAME)

# $(NAME): $(OBJ) $(HEADER)
# 		$(CC) $(OBJ) -o $(NAME)

# $(OBJDIR)/%.o: %.cpp $(HEADER)
# 		mkdir -p $(dir $@)
# 		$(CC) $(FLAGS) -c $< -o $@


# clean : 
# 	$(RM) $(OBJ_DIR)

# re: clean all

# .PHONY: all clean re


NAME		= PhoneBook
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main Contact PhoneBook

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Contact.hpp PhoneBook.hpp

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all%  