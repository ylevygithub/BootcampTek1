/*
** EPITECH PROJECT, 2018
** disp_stdarg
** File description:
** display the args
*/

#include "include/my.h"

int disp_stdarg(char *s, ...)
{
  va_list valist;
  int nb = my_strlen(s);
  int i = 0;

  va_start(valist, s);
  while (i < nb) {
    if (s[i] == 'c')
      my_putchar(va_arg(valist, int));
    else if (s[i] == 's')
      my_putstr(va_arg(valist, char *));
    else if (s[i] == 'i')
      my_put_nbr(va_arg(valist, int));
    else {
          write(2, "Wrong parameter.\n", 16);
          return (84);
        }
      my_putchar('\n');
      i++;
    }
    va_end(valist);
    return (0);
}
int main()
{
  disp_stdarg("csiis", 'X', "hi", 10, -3, "plop");
}
