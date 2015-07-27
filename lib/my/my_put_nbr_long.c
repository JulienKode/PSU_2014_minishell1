/*
** my_put_nbr.c for  in /home/karst_j
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Oct 24 20:47:45 2014 julien karst
** Last update Fri Nov 14 17:41:12 2014 Julien Karst
*/

int     my_put_nbr_long(long nb)
{
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb / 10 > 0)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}
