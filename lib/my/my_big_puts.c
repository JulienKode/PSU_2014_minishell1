/*
** my_big_puts.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_minishell1/lib/my
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Jan 29 14:25:07 2015 Julien Karst
** Last update Sat Jan 31 19:25:57 2015 Julien Karst
*/

#include "my.h"
#include "my_printf.h"

void	my_fonc_big_puts(char **argv, int mode)
{
  int	i;

  i = 0;
  while (argv[i])
    {
      if (mode == 0)
	my_printf("%s\n", argv[i]);
      if (mode == 1)
	my_printf("%s | argv[%d]\n", argv[i], i);
      if (mode == 2)
	my_printf("%s", argv[i]);
      i++;
    }
}

void	my_big_puts(char **argv)
{
  my_fonc_big_puts(argv, 0);
}

void	big_puts(char **argv)
{
  my_big_puts(argv);
}

void	big_str(char **argv)
{
  my_fonc_big_puts(argv, 2);
}

void	big_puts1(char **argv)
{
  my_fonc_big_puts(argv, 1);
}
