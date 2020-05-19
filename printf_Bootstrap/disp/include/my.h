/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** prototypes function that I need for printf
*/

#include <unistd.h>
#include <stdarg.h>

#ifndef MY_H_
# define MY_H_

void my_putchar(char );
int my_put_nbr(int );
int my_putstr(char *);
int my_strlen(char *);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *str, ...);

#endif
