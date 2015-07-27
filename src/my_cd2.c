/*
** my_cd2.c for $ in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sun Feb  1 11:23:54 2015 Julien Karst
** Last update Sun Feb  1 12:19:47 2015 Julien Karst
*/

#include "sh.h"

void    my_cd(t_env *e)
{
  int   i;
  char  *path;

  if (e->arg[1] == NULL)
    path = e->home;
  else
    {
      path = my_strdup(e->arg[1]);
      if (e->arg[1][0] == '~')
	path = my_tilt(e);
      if (e->arg[1][0] == '-')
	path = e->old_pwd;
    }
  if (check_access(path))
    {
      i = chdir(path);
      if (i == -1)
	my_printf("Error -> Chdir Failed\n");
    }
}

int	check_access(char *path)
{
  if (access(path, F_OK) == -1)
    {
      my_printf("bash: cd: %s: No files or folders of this type\n", path);
      return (0);
    }
  else if (access(path, R_OK) == -1)
    {
      my_printf("bash: cd: %s: You do not have the access right\n", path);
      return (0);
    }
  return (1);
}
