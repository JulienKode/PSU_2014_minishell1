/*
** my_put_nbr_base.c for  in /home/karst_j/rendu/printf/lib/my
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Fri Nov 14 09:57:11 2014 Julien Karst
** Last update Sat Nov 15 23:02:05 2014 Julien Karst
*/

void    my_put_nbr_base(int nb, char *base)
{
  int   div;
  int   res;
  int   s_base;

  s_base = my_strlen(base);
  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while ((nb / div) >= s_base)
    div = div * s_base;
  while (div > 0)
    {
      res = (nb / div) % s_base;
      my_putchar(base[res]);
      div = div / s_base;
    }
}

void    my_put_nbr_base_long(long nb, char *base)
{
  long  div;
  long  res;
  long  s_base;

  s_base = my_strlen(base);
  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while ((nb / div) >= s_base)
    div = div * s_base;
  while (div > 0)
    {
      res = (nb / div) % s_base;
      my_putchar(base[res]);
      div = div / s_base;
    }
}
