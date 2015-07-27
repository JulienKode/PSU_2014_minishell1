/*
** fonction.c for  in /home/karst_j/rendu/printf
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Thu Nov 13 15:32:28 2014 Julien Karst
** Last update Fri Nov 14 13:25:11 2014 Julien Karst
*/

#include <stdarg.h>
#include "my_printf.h"

void    my_c(va_list args)
{
  my_putchar(va_arg(args, int));
}

void    my_d(va_list args)
{
  my_put_nbr(va_arg(args, int));
}

void    my_s(va_list args)
{
  my_putstr(va_arg(args, char*));
}

void    my_b(va_list args)
{
  my_put_nbr_base(va_arg(args, int), "01");
}

void    my_S(va_list args)
{
  char  *str;
  int   i;

  i = 0;
  str = va_arg(args, char *);
  while (str[i])
    {
      if (str[i] <= 32 || str[i] > 127)
        {
          my_putchar(47);
          my_put_nbr_base(str[i], "01234567");
        }
      else
        my_putchar(str[i]);
      i++;
    }
}
