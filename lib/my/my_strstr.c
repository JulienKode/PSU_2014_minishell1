/*
** my_strstr.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_04
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 15:59:14 2014 julien karst
** Last update Tue Oct  7 17:17:56 2014 julien karst
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  while (str[i] != '\0')
    {
      j = 0;
      while (str[i] == to_find[j] || to_find[j] == 0)
	{
	  if (to_find[j] == '\0')
	    {
	      return (str + i - j);
	    }
	  i++;
	  j++;
	}
      i++;
    }
  return (0);
}
