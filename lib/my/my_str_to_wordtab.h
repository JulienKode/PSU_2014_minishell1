/*
** my_str_to_wordtab.h for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Jan 29 13:32:24 2015 Julien Karst
** Last update Wed Feb  4 13:18:46 2015 Julien Karst
*/

#ifndef MY_STR_TO_WORDTAB_H_
# define MY_STR_TO_WORDTAB_H_

typedef struct	s_wordtab
{
  int		i;
  int		x;
  int		y;
  int		nb;
  char		**a;
}		t_wordtab;

typedef struct	s_nbword
{
  int		i;
  int		nb;
}		t_nbword;

int		nb_word(char *str, char c);
int		nb_car(char *str, char c);
char		*before_str(char *str, int i, char c);
char		*after_str(char *str, char c);
char		**my_str_to_wordtab(char *str, char c);
char		*init_my_str_to_wordtab(t_wordtab *t, char *str, char c);
void		init_nb_word(t_nbword *t);

#endif /* MY_STR_TO_WORDTAB_H_ */
