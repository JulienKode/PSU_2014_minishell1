/*
** my_strncpy.c for  in /home/karst_j/rendu/Piscine_C_J06
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Oct  6 17:29:35 2014 julien karst
** Last update Mon Oct 20 20:03:12 2014 julien karst
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  if (i < n)
    dest[i] = '\0';
  return (dest);
}
