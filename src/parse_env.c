/*
** parse_env.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 24 14:26:05 2015 Julien Karst
** Last update Sun Feb  1 15:31:18 2015 Julien Karst
*/

#include "sh.h"

int	i_detect(char *d, char *env)
{
  int   i;
  int   c;
  int   m;

  i = 0;
  c = my_strlen(d);
  m = 0;
  while (d[i])
    {
      if (d[i] == env[i])
	m++;
      i++;
    }
  if (c == m)
    return (c);
  else
    return (0);
}

char	*s_detect(char *env, int c)
{
  int	i;

  i = 0;
  while (i < c)
    {
      i++;
      env++;
    }
  return (env);
}

char	*detect(char **env, char *d)
{
  int	r;
  int	y;

  y = 0;
  r = 0;
  while (env[y])
    {
      if (env[y][0] == d[0])
	r = i_detect(d, env[y]);
      if (r != 0)
	return (s_detect(env[y], r));
      y++;
    }
  return (NULL);
}

void	add_to_struct(t_env *e)
{
  if ((e->pwd = detect(e->env, "PWD=")) == NULL)
    e->pwd = "/";
  if ((e->old_pwd = detect(e->env, "OLDPWD=")) == NULL)
    e->old_pwd = "/";
  if ((e->term = detect(e->env, "TERM=")) == NULL)
    e->term = NULL;
  if ((e->shell = detect(e->env, "SHELL=")) == NULL)
    e->shell = NULL;
  if ((e->user = detect(e->env, "USER=")) == NULL)
    e->user = "user";
  if ((e->home = detect(e->env, "HOME=")) == NULL)
    e->home = "/";
  if ((e->path_long = detect(e->env, "PATH=")) == NULL)
    e->path = NULL;
  else
    e->path = my_str_to_wordtab(e->path_long, ':');
}
