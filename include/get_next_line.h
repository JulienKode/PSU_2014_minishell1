/*
** get_net_line.h for  in /home/karst_j/rendu/CPE_2014_get_next_line
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Mon Nov 17 16:01:42 2014 Julien Karst
** Last update Sun Nov 23 18:07:06 2014 Julien Karst
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# define BUFFER_SIZE	4096

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char    *get_next_line(const int fd);

#endif /* GET_NEXT_LINE_H */
