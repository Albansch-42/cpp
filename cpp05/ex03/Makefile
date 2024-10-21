# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:30:40 by aschmitt          #+#    #+#              #
#    Updated: 2024/10/21 11:59:49 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR		= .objFiles
SRCDIR		= src
INCDIR		= inc

FILES		= main AForm PresidentialPardonForm  ShrubberyCreationForm Bureaucrat  RobotomyRequestForm Intern
INCFILE		= AForm PresidentialPardonForm  ShrubberyCreationForm Bureaucrat  RobotomyRequestForm Intern

SRC			= $(addprefix $(SRCDIR)/, $(FILES:=.cpp))
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= $(addprefix $(INCDIR)/, $(INCFILE:=.hpp))

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) 
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADER) Makefile
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -I$(INCDIR) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re