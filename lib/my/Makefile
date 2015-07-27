##
## Makefile for  in /home/karst_j/rendu/Piscine_C_J11
## 
## Made by julien karst
## Login   <karst_j@epitech.net>
## 
## Started on  Mon Oct 20 13:11:12 2014 julien karst
## Last update Wed Feb  4 13:40:54 2015 Julien Karst
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -I. -g

LDFLAGS	=

NAME	= libmy.a

SRCS	= my_putchar.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_find_prime_sup.c \
	  my_revstr.c \
	  my_strcpy.c \
	  my_strlowcase.c \
	  my_getnbr.c \
	  my_showmem.c \
	  my_str_isalpha.c \
	  my_strncat.c \
	  my_showstr.c \
	  my_str_islower.c \
	  my_strncmp.c \
	  my_is_prime.c \
	  my_sort_int_tab.c \
	  my_str_isnum.c \
	  my_strncpy.c \
	  my_power_rec.c \
	  my_square_root.c \
	  my_str_isprintable.c \
	  my_strstr.c \
	  my_strcapitalize.c \
	  my_str_isupper.c \
	  my_strupcase.c \
	  my_strcat.c \
	  my_strlcat.c \
	  my_strcmp.c \
	  my_put_nbr_base.c \
	  my_put_nbr_long.c \
	  my_put_nbr_unsigned.c \
	  my_printf.c \
	  my_fonct.c \
	  my_fonct2.c \
	  my_fonct3.c \
	  fonc_base.c \
	  my_str_to_wordtab.c \
	  my_str_to_wordtab2.c \
	  my_is.c \
	  my_big_puts.c \
	  get_next_line.c \
	  my_strdup.c \

SRC2	=	my.h
SRC3	=	my_printf.h
SRC4	=	my_str_to_wordtab.h
SRC5	=	get_next_line.h

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp $(NAME) ..
	cp $(SRC2) ../../include
	cp $(SRC3) ../../include
	cp $(SRC4) ../../include
	cp $(SRC5) ../../include	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
