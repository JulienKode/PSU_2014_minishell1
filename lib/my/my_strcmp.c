/*
** my_strcmp.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_05
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 09:37:49 2014 julien karst
** Last update Mon Oct 20 20:02:18 2014 julien karst
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}
