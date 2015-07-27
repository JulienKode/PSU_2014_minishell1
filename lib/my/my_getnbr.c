/*
** my_getnbr.c for  in /home/karst_j
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Oct 24 21:11:06 2014 julien karst
** Last update Fri Jan 30 19:03:43 2015 Julien Karst
*/

#include "my.h"

int	my_getnbr(char *str)
{
  int	res;
  int	sign;

  sign = 1;
  res = 0;
  if (*str == '-')
    {
      str++;
      sign = -1;
    }
  while (*str)
    {
      res = res * 10;
      res = res + *str - '0';
      str++;
    }
  return (res * sign);
}
