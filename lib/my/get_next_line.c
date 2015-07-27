/*
** get_net_line.c for  in /home/karst_j/rendu/CPE_2014_get_next_line
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Mon Nov 17 16:05:19 2014 Julien Karst
** Last update Wed Feb  4 14:38:34 2015 Julien Karst
*/

#include "get_next_line.h"

char    *cpy(char *dest, char *src)
{
  int   i;
  int	n;

  i = 0;
  n = 0;
  while (dest[n])
    {
      n++;
    }
  while (src[i] != '\0')
    {
      dest[n] = src[i];
      i++;
      n++;
    }
  dest[n] = '\0';
  return (dest);
}

char    *my_realloc(char *str, int n)
{
  char  *tmp;
  int   i;

  i = 0;
  if (str == NULL)
    {
      str = malloc((n + 1) * sizeof(char));
      while (i < n)
	{
	  str[i] = 0;
	  i++;
	}
      return (str);
    }
  if (n == 0)
    return (str);
  tmp = malloc((bsn_in_buffer_strlen(str, 0) + BUFFER_SIZE) * sizeof(char));
  while (str[i])
    {
      tmp[i] = str[i];
      i++;
    }
  tmp[i] = 0;
  return (tmp);
}

int		bsn_in_buffer_strlen(char *str, int a)
{
  int	i;

  i = 0;
  if (a == 0)
    {
      while (str[i])
	i++;
      return (i);
    }
  else
    {
      if (str == NULL)
	return (0);
      while (str[i])
	{
	  if (str[i] == '\n')
	    return (1);
	  i++;
	}
      return (0);
    }
}

char		*renv_res_buff(char *buffer, int c, char *res)
{
  res = malloc(bsn_in_buffer_strlen(buffer, 0) * sizeof(char));
  if (res == NULL)
    return (NULL);
  while (buffer[c] && buffer[c] != '\n')
    {
      res[c] = buffer[c];
      c++;
    }
  res[c] = 0;
  return (res);
}

char		*get_next_line(const int fd)
{
  static char	*buffer = NULL;
  int		size;
  char		tmp[BUFFER_SIZE + 1];
  char		*res;

  size = 1;
  tmp[0] = 0;
  while (bsn_in_buffer_strlen(buffer, 1) == 0)
    {
      size = read(fd, tmp, BUFFER_SIZE);
      if (size <= 0)
	return (buffer);
      tmp[size] = 0;
      buffer = my_realloc(buffer, size);
      buffer = cpy(buffer, tmp);
    }
  res = renv_res_buff(buffer, 0, NULL);
  buffer = &buffer[bsn_in_buffer_strlen(res, 0) + 1];
  if (buffer[0] == 0)
    buffer = NULL;
  return (res);
}
