/*
** my_command.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Jan 29 19:53:17 2015 Julien Karst
** Last update Tue Feb  3 14:58:58 2015 Julien Karst
*/

#include "sh.h"

void	my_shell_exit(t_env *e)
{
  int	res;

  if (e->arg[1] == NULL)
    res = 0;
  else
    res = my_getnbr(e->arg[1]);
  my_printf("exit\n");
  exit(res);
}

void	my_clear(t_env *e)
{
  char	**clear;
  char	*cmd;
  int	i;
  pid_t	pid;
  int	status;

  cmd = "clear clear";
  i = 0;
  clear = my_str_to_wordtab(cmd, ' ');
  if ((pid = fork()) == -1)
    my_exit2("Error -> Fork Failed :(");
  if (pid == 0)
    {
      while (e->path[i])
	{
	  e->file = my_strcat_separe(e->path[i], clear[0], '/');
	  execve(e->file, clear, e->env);
	  i++;
	}
    }
  else
    {
      wait(&status);
      my_printf("\033[32m[%s@localhost ~]$> \033[0m", e->user);
    }
}

void	my_echo(t_env *e)
{
  char	*puts;

  puts = e->buff;
  while (is_carac(*puts, ' ') == 0)
    puts++;
  while (is_carac(*puts, ' ') == 1)
    puts++;
  my_printf("%s\n", puts);
}
