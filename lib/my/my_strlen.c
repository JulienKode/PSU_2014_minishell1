/*
** my_strlen.c for  in /home/karst_j/rendu/Piscine_C_J04
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Oct  2 20:57:57 2014 julien karst
** Last update Fri Nov 14 17:46:36 2014 Julien Karst
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
