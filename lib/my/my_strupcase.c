/*
** my_strupcase.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_05
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 13:43:55 2014 julien karst
** Last update Tue Oct  7 14:05:40 2014 julien karst
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
