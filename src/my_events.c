/*
** my_events.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Jan 28 14:24:48 2015 Julien Karst
** Last update Wed Feb  4 16:17:45 2015 Julien Karst
*/

#include "sh.h"

void	signal_sig()
{
  my_printf("\n\033[32m[%s@localhost ~]$> \033[0m", e->user);
}
