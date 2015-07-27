/*
** my_str_isupper.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_13
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 18:00:04 2014 julien karst
** Last update Tue Oct  7 19:51:14 2014 julien karst
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  if (str[0] =='\0')
    return (1);
  while (str[i] != 0)
    {
      if (!(str[i] >= 65 && str[i] <= 90))
        return (0);
      ++i;
    }
  return (1);
}
