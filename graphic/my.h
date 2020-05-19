/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_
struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
    sfRenderWindow *win;
};
typedef struct framebuffer framebuffer_t;


framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
#endif    /* FRAMEBUFFER_H_ */
