/*
** my_strcat.c for my_strcat in /home/karst_j/rendu/Piscine_C_J07
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 20:00:12 2014 julien karst
** Last update Thu Jan 29 15:17:06 2015 Julien Karst
*/

#include <stdlib.h>
#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	c;
  int	len;
  char	*str;

  i = 0;
  c = 0;
  len = my_strlen(dest) + my_strlen(src) + 1;
  if ((str = malloc(sizeof(char) * len)) == NULL)
    my_exit2("Error -> Malloc Failed in my_strcat");
  while (dest[i] != '\0')
    str[c++] = dest[i++];
  i = 0;
  while (src[i] != '\0')
    str[c++] = src[i++];
  str[c] = 0;
  return (str);
}

char	*my_strcat_separe(char *dest, char *src, char car)
{
  int   i;
  int   c;
  int   len;
  char  *str;

  i = 0;
  c = 0;
  len = my_strlen(dest) + my_strlen(src) + 2;
  if ((str = malloc(sizeof(char) * len)) == NULL)
    my_exit2("Error -> Malloc Failed in my_strcat_separe");
  while (dest[i] != '\0' && dest[i] != '!')
    str[c++] = dest[i++];
  str[c++] = car;
  i = 0;
  while (src[i] != '\0')
    str[c++] = src[i++];
  str[c] = 0;
  return (str);
}
