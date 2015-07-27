/*
** my_cd.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 31 19:55:37 2015 Julien Karst
** Last update Sun Feb  1 12:16:42 2015 Julien Karst
*/

#include "sh.h"

char	*my_tilt(t_env *e)
{
  char	*path;

  path = e->arg[1];
  path++;
  return (my_strcat(e->home, path));
}
