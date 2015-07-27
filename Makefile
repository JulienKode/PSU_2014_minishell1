##
## Makefile for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
## 
## Made by Julien Karst
## Login   <karst_j@epitech.net>
## 
## Started on  Sat Jan 24 13:37:32 2015 Julien Karst
## Last update Sun Feb  1 12:20:14 2015 Julien Karst
##

NAME	= mysh

CC 	= gcc

CFLAGS	= -I./include

LDFLAGS	= -L./lib -lmy

SCR	= src/main.c \
	  src/parse_env.c \
	  src/minishell.c \
	  src/my_events.c \
	  src/check_error.c \
	  src/my_cd.c \
	  src/my_cd2.c \
	  src/my_command.c

OBJ	= $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(CFLAGS) -lncurses


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
