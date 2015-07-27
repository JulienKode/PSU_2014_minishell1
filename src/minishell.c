/*
** minishell.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 24 18:24:36 2015 Julien Karst
** Last update Wed Feb  4 15:53:30 2015 Julien Karst
*/

#include "sh.h"

int	minishell(t_env *e)
{
  pid_t	pid;
  int	status;

  my_clear(e);
  while (e->buff = get_next_line(0))
    {
      check_fail(e);
      if (e->buff[0] == 0 || just_shit(e->buff) == 0)
	my_printf("\033[32m[%s@localhost ~]$> \033[0m", e->user);
      else
	exec_fonc(e);
    }
}

void	exec_fonc(t_env *e)
{
  e->arg = my_str_to_wordtab(e->buff, ' ');
  if (recode_command(e) == 0)
    exec_command(e);
  else
    my_printf("\033[32m[%s@localhost ~]$> \033[0m", e->user);
  free(e->arg);
}

void	exec_command(t_env *e)
{
  int	i;
  pid_t	pid;
  int	status;

  i = 0;
  if ((pid = fork()) == -1)
    my_exit2("Error -> Fork Failed :(");
  if (pid == 0)
    {
      while (e->path[i])
	{
	  if (good_path(e))
	    execve(e->arg[0], e->arg, e->env);
	  e->file = my_strcat_separe(e->path[i], e->arg[0], '/');
	  execve(e->file, e->arg, e->env);
	  i++;
	}
      my_printf("%e%e%e", "Bash ", e->buff, ": unknown command...\n");
      exit(1);
    }
  else
    {
      wait(&status);
      my_printf("\033[32m[%s@localhost ~]$> \033[0m", e->user);
    }
}

int	recode_command(t_env *e)
{
  if (detect_cmd("cd", e->arg[0]) == 1)
    my_cd(e);
  else if (detect_cmd("exit", e->arg[0]) == 1)
    my_shell_exit(e);
  else if (detect_cmd("echo", e->arg[0]) == 1)
    my_echo(e);
  else
    return (0);
  return (1);
}

int     detect_cmd(char *str, char *cmd)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] != cmd[i])
	return (0);
      i++;
    }
  return (1);
}
