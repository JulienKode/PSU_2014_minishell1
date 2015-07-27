/*
** fonc_base.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 24 13:53:45 2015 Julien Karst
** Last update Thu Jan 29 15:49:23 2015 Julien Karst
*/

#include <unistd.h>
#include "my.h"

void	my_str(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_exit(char *str)
{
  my_str(str);
  my_str("\n");
  exit(1);
}

void	my_str2(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_exit2(char *str)
{
  my_str2(str);
  my_str2("\n");
  exit(1);
}
