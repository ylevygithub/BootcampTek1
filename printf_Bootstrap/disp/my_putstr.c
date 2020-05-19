/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char *str)
{
    int nb;
    
    nb = 0;
    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return (0);
}
