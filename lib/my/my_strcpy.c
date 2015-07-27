/*
** my_strcpy.c for  in /home/karst_j/rendu/Piscine_C_J06
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Oct  6 10:48:12 2014 julien karst
** Last update Wed Oct  8 14:38:38 2014 julien karst
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
