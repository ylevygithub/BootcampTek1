/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

int main()
{
    sfRenderWindow* window;
    sfVideoMode mode = {800, 800, 32};

    window = sfRenderWindow_create(mode, "EPI_REBIRTH", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
