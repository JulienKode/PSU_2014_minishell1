/*
** my_str_isprintable.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_14
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 18:18:06 2014 julien karst
** Last update Tue Oct  7 20:04:03 2014 julien karst
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != 0)
    {
      if (!(str[i] >= 32 && str[i] <= 126))
        return (0);
      ++i;
    }
  return (1);
}
