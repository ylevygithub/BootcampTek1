/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** the lenght of the string
*/

int my_strlen(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0')
        nb++;
    return (nb);
}
