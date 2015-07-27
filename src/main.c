/*
** main.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 24 13:46:56 2015 Julien Karst
** Last update Wed Feb  4 16:17:10 2015 Julien Karst
*/

#include "sh.h"

t_env	*e;

int	main(int ac, char **argv, char **env)
{
  if ((e = malloc(sizeof(t_env) * 1)) == NULL)
    my_exit2("Error -> Malloc Failed");
  e->env = env;
  add_to_struct(e);
  signal(SIGINT, signal_sig);
  minishell(e);
}
