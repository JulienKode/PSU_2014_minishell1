/*
** my_strlowcase.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_08
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 14:10:28 2014 julien karst
** Last update Tue Oct  7 14:11:23 2014 julien karst
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
