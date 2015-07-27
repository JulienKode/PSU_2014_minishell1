/*
** my_isneg.c for  in /home/karst_j/Piscine_C_J03
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Oct  1 12:50:24 2014 julien karst
** Last update Mon Oct 20 20:01:04 2014 julien karst
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
