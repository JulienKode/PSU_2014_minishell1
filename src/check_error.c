/*
** check_error.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 31 19:33:14 2015 Julien Karst
** Last update Wed Feb  4 15:54:17 2015 Julien Karst
*/

#include "sh.h"

void	check_fail(t_env *e)
{
  int	i;

  i = 0;
  while (e->buff[i])
    {
      if (e->buff[i] == '\t')
	e->buff[i] = ' ';
      i++;
    }
}

int	good_path(t_env *e)
{
  if (e->arg[0][0] == '/')
    return (1);
  else
    return (0);
}

int	just_shit(char *str)
{
  while (*str)
    {
      if (*str != ' ' && *str != '\t')
	return (1);
      str++;
    }
  return (0);
}
