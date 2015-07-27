/*
** my_is.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Jan 29 13:35:02 2015 Julien Karst
** Last update Wed Feb  4 14:42:39 2015 Julien Karst
*/

int     is_bad(char c, char cc)
{
  if (c != 0 && c != cc && c != 10 && c != '\t')
    return (1);
  else
    return (0);
}

int     is_carac(char c, char cc)
{
  if (c == cc || c == '\t')
    return (1);
  else
    return (0);
}

int     is_end(char c)
{
  if (c == 0 || c == 10)
    return (1);
  else
    return (0);
}

int	is_neg(char *str)
{
  int           i;
  int           c;

  i = 0;
  c = i;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	c++;
      i++;
    }
  if (c % 2 != 0)
    return (1);
  else
    return (0);
}

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
