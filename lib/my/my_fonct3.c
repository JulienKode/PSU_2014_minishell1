/*
** my_fonct3.c for  in /home/karst_j/rendu/printf
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Fri Nov 14 15:31:51 2014 Julien Karst
** Last update Thu Jan 29 15:50:50 2015 Julien Karst
*/

#include <stdarg.h>
#include "my_printf.h"

void    my_i(va_list args)
{
  my_put_nbr(va_arg(args, int));
}

void    my_u(va_list args)
{
  my_put_nbr_unsigned(va_arg(args, unsigned int));
}

void    my_pour(va_list args)
{
  my_putchar('%');
}

void	my_e(va_list args)
{
  my_str2(va_arg(args, char*));
}
