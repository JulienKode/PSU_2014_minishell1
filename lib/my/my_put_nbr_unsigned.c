/*
** my_put_nbr_unsigned.c for  in /home/karst_j/rendu/printf/lib/my
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Fri Nov 14 17:44:29 2014 Julien Karst
** Last update Sat Nov 15 12:08:04 2014 Julien Karst
*/

int     my_put_nbr_unsigned(unsigned int nb)
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
