/*
** my_strncmp.c for  in /home/karst_j/rendu/Piscine_C_J06/ex_06
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 13:33:04 2014 julien karst
** Last update Wed Oct  8 14:35:38 2014 julien karst
*/

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n-1)
    i++;
  return (s1[i] - s2[i]);
}
