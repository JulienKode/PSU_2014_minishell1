/*
** my_printf.c for  in /home/karst_j/printf
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Mon Nov 10 12:39:30 2014 Julien Karst
** Last update Thu Jan 29 15:52:03 2015 Julien Karst
*/

#include <stdarg.h>
#include "my_printf.h"

t_fptr  my_fonct[] =
  {
    {'c', &my_c},
    {'d', &my_d},
    {'s', &my_s},
    {'b', &my_b},
    {'S', &my_S},
    {'o', &my_o},
    {'x', &my_x},
    {'X', &my_X},
    {'p', &my_p},
    {'i', &my_i},
    {'u', &my_u},
    {'%', &my_pour},
    {'e', &my_e},
    {'l', &my_ld}
  };

int             tmp_fct(char *str, int i)
{
  if (str[i] == ' ')
    {
      if (str[i - 2] == ' ')
        return (i + 2);
      while (str[i] == ' ')
        i++;
      if (str[i] != 'd' && str[i] != 'i' && str[i] != 'l' && str[i] != 'p')
        return (i);
      else
        my_putchar(' ');
    }
  return (i);
}

void             tmp2_fct(char *str, int i, va_list args)
{
  int           j;

  j = 0;
  while (j <= 12)
    {
      if (my_fonct[j].car == str[i])
        my_fonct[j].fptr(args);
      j++;
    }
}

int            my_printf(char *str, ...)
{
  va_list       args;
  int           i;

  i = -1;
  va_start(args, str);
  while (str[++i])
    {
      if (str[i] == '%')
        {
          i++;
          i = tmp_fct(str, i);
          tmp2_fct(str, i, args);
        }
      else
        my_putchar(str[i]);
    }
}
