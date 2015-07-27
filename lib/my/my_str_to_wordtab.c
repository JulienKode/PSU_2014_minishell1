/*
** my_str_to_wordtab.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Jan 27 16:04:04 2015 Julien Karst
** Last update Wed Feb  4 16:09:07 2015 Julien Karst
*/

#include <stdlib.h>
#include "my.h"
#include "my_str_to_wordtab.h"

int		nb_word(char *str, char c)
{
  t_nbword	t;

  init_nb_word(&t);
  if (is_carac(str[t.i], c))
    while (is_carac(str[t.i], c))
      t.i += 1;
  while (str[t.i])
    {
      if (str[t.i] == 10)
	{
	  t.nb += 1;
	  return (t.nb);
	}
      else if (is_carac(str[t.i], c))
	{
	  t.nb += 1;
	  while (is_carac(str[t.i], c))
	    t.i += 1;
	  if (str[t.i] == 0)
	    return (t.nb);
	}
      t.i += 1;
    }
  t.nb += 1;
  return (t.nb);
}

int		nb_car(char *str, char c)
{
  int	res;
  int	i;

  res = 0;
  i = 0;
  while (is_end(str[i]) == 0 && str[i] != c && str[i] != '\n' && str[i] != '\t')
    i++;
  return (i);
}

char		*before_str(char *str, int i, char c)
{
  if (is_carac(*str, c))
    while (is_carac(*str, c))
      str++;
  return (str);
}

char		*after_str(char *str, char c)
{
  int	i;

  i = my_strlen(str) - 1;
  while (is_carac(str[i], c))
    {
      str[i] = 0;
      i--;
    }
  return (str);
}

char		**my_str_to_wordtab(char *str, char c)
{
  t_wordtab	t;

  t.i = 0;
  /* str = before_str(str, 0, c); */
  str = init_my_str_to_wordtab(&t, str, c);
  while (is_end(str[t.i]) == 0)
    {
      while (str[t.i] == c || str[t.i] == '\n' || str[t.i] == '\t')
	t.i += 1;
      t.x = 0;
      t.a[t.y] = malloc(((nb_car((str + t.i), c) + 1)) * sizeof(char));
      if (t.a[t.y] == NULL)
	my_exit2("Error -> Malloc Failed");
      while (str[t.i] && str[t.i] != c && str[t.i] != '\n' && str[t.i] != '\t')
	{
	  t.a[t.y][t.x] = str[t.i];
	  t.x += 1;
	  t.i += 1;
	}
      t.a[t.y][t.x] = 0;
      t.y += 1;
    }
  t.a[t.y] = 0;
  return (t.a);
}
