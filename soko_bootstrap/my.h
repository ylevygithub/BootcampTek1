/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct popup
{
    int width;
    int height;
};
typedef struct popup popup_t;
