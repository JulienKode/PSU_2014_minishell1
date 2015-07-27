/*
** my_str_isalpha.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_10
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 17:22:09 2014 julien karst
** Last update Mon Oct 20 20:02:45 2014 julien karst
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != 0)
    {
      if (!(str[i] >= 65 && str[i] <= 90) || !(str[i] >= 97 && str[i] <= 122))
	return (0);
      ++i;
    }
  return (1);
}
