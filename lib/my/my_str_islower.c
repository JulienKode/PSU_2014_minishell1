/*
** my_str_islower.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_12
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 17:44:10 2014 julien karst
** Last update Tue Oct  7 19:50:14 2014 julien karst
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != 0)
    {
      if (!(str[i] >= 97 && str[i] <= 122))
        return (0);
      ++i;
    }
  return (1);
}
