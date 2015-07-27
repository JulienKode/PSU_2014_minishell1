/*
** my_str_to_wordtab2.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Jan 29 13:49:01 2015 Julien Karst
** Last update Wed Feb  4 14:00:09 2015 Julien Karst
*/

#include <stdlib.h>
#include "my.h"
#include "my_str_to_wordtab.h"

char	*init_my_str_to_wordtab(t_wordtab *t, char *str, char c)
{
  t->nb = nb_word(str, c);
  t->x = 0;
  t->y = 0;
  t->a = malloc(sizeof(char*) * (t->nb + 1));
  if (t->a == NULL)
    my_exit2("Error -> Malloc failed :(");
  return (after_str(str, c));
}

void	init_nb_word(t_nbword *t)
{
  t->i = 0;
  t->nb = 0;
}
