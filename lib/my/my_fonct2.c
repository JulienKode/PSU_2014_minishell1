/*
** my_fonct2.c for  in /home/karst_j/rendu/printf
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Fri Nov 14 15:18:39 2014 Julien Karst
** Last update Sat Nov 15 16:47:22 2014 Julien Karst
*/

#include <stdarg.h>
#include "my_printf.h"

void    my_o(va_list args)
{
  my_put_nbr_base(va_arg(args, int), "01234567");
}
void    my_x(va_list args)
{
  my_put_nbr_base(va_arg(args, int), "0123456789abcdef");
}
void    my_X(va_list args)
{
  my_put_nbr_base(va_arg(args, int), "0123456789ABCDEF");
}
void    my_p(va_list args)
{
  my_putstr("0x");
  my_put_nbr_base_long(va_arg(args, long), "0123456789abcdef");
}

void    my_ld(va_list args)
{
  my_put_nbr_long(va_arg(args, long));
}
