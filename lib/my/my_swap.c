/*
** my_swap.c for  in /home/karst_j/rendu/Piscine_C_J03/test
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Oct  2 13:21:13 2014 julien karst
** Last update Thu Oct  2 14:07:52 2014 julien karst
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
