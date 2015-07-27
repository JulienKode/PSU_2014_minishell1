/*
** my_revstr.c for  in /home/karst_j/rendu/Piscine_C_J06
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Oct  6 19:31:43 2014 julien karst
** Last update Mon Oct 20 20:01:38 2014 julien karst
*/

char	*my_revstr(char *str)
{
  int	i;
  int	a;
  char	b;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  i--;
  a = 0;
  while (a < i)
    {
      b = str[a];
      str[a] = str[i];
      str[i] = b;
      a++;
      i--;
    }
  return (str);
}
