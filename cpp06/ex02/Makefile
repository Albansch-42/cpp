NAME		= base
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR		= .objFiles
SRCDIR		= src
INCDIR		= inc

FILES		= main Base
INCFILE		= Base A B C

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