/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "my.h"

void my_popup(char *s)
{
    popup_t popup;
    initscr();
    popup.height = LINES / 2;
    popup.width = COLS / 2;
    mvprintw(popup.height, popup.width, s);
    refresh();
}

int main()
{
    my_popup("salut");
}
