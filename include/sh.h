/*
** sh.h for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 24 13:48:03 2015 Julien Karst
** Last update Wed Feb  4 16:16:55 2015 Julien Karst
*/

#ifndef SH_H_
# define SH_H_

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <signal.h>
#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"
#include "my_str_to_wordtab.h"

typedef struct	s_env
{
  char		**env;
  char		*term;
  char		*shell;
  char		*user;
  char		*path_long;
  char		**path;
  char		*home;
  char		*old_pwd;
  char		*pwd;
  
  char		*buff;
  int		r;
  
  char		*file;
  char		**arg;
}		t_env;

extern t_env	*e;

char		*detect(char **env, char *d);
char		*s_detect(char *env, int c);
int		i_detect(char *d, char *env);
void		add_to_struct(t_env *e);
int		minishell(t_env *e);
void		exec_fonc(t_env *e);
int		recode_command(t_env *e);
void		exec_command(t_env *e);
int		detect_cmd(char *str, char *cmd);
void		signal_sig();
void		my_shell_exit(t_env *e);
void		my_clear(t_env *e);
void		my_echo(t_env *e);
void		check_fail(t_env *e);
int		good_path(t_env *e);
void		my_cd(t_env *e);
char		*my_tilt(t_env *e);
int		check_access(char *path);
void		signal_sig2();
int		just_shit(char *str);

#endif /* SH_H_ */
