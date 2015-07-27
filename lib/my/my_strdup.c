/*
** my_strdup.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sun Feb  1 09:45:52 2015 Julien Karst
** Last update Sun Feb  1 09:47:37 2015 Julien Karst
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *str)
{
  int	i;
  char	*str2;

  i = my_strlen(str);
  if ((str2 = malloc(i * sizeof(char))) == 0)
    return (0);
  my_strcpy(str2, str);
  return (str2);
}
