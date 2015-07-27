/*
** my_putstr.c for  in /home/karst_j
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Oct 24 21:06:36 2014 julien karst
** Last update Fri Nov 14 17:48:05 2014 Julien Karst
*/

#include "my.h"

int     my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
