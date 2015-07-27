/*
** my_strncat.c for  in /home/karst_j/rendu/Piscine_C_J07
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 20:19:04 2014 julien karst
** Last update Tue Oct  7 20:22:36 2014 julien karst
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (dest[i] != '\0')
    i++;
  while (c < nb)
    {
      dest[i] = src[c];
      i++;
      c++;
    }
  dest[i] = 0;
  return (dest);
}
