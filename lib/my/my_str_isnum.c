/*
** my_str_isnum.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_11
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 17:40:00 2014 julien karst
** Last update Tue Oct  7 19:48:24 2014 julien karst
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != 0)
    {
      if (!(str[i] >= 48 && str[i] <= 57))
        return (0);
      ++i;
    }
  return (1);
}
