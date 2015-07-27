/*
** my_strcapitalize.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_09
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 14:12:36 2014 julien karst
** Last update Tue Oct  7 14:26:10 2014 julien karst
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[0] >= 97 && str[0] <= 122)
	str[0] = str[0] - 32;
      else if (str[i] >= 65 && str[i] <= 90)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
