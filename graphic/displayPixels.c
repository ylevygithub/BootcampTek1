/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "my.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    // TODO you have to implemente this function.
    // It creates a framebuffer structure and allocates the pixels array which
    // contains your image.
    // CAUTION: the program might receive SIGSEGV if it is not implemented.    
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    int bitsPerPixel = 32;

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width *
                                 height *
                                 bitsPerPixel / 8);
    return (framebuffer);
}
void framebuffer_destroy(framebuffer_t *framebuffer)
{
    // TODO you have to implemente this function.
    // It frees the framebuffer and the memory space used by the image.
    free(framebuffer);
}
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    // TODO you have to implemente this function.
    // It sets the color of the pixel (x, y), that is at the right index in the pixels array
    // of the framebuffer passed as parameter.

    framebuffer->pixels[framebuffer->width * y + x] = color.r;
    framebuffer->pixels[framebuffer->width * y + x+1] = color.g;
    framebuffer->pixels[framebuffer->width * y + x+2] = color.b;
    framebuffer->pixels[framebuffer->width * y + x+3] = color.a;
}
int display_framebuffer(framebuffer_t *framebuffer)
{
    sfVideoMode mode = {800, 600, 32};
    sfTexture *texture;
    unsigned int x = 100;
    unsigned int y = 100;
    sfEvent event;
    sfSprite *sprite;
    
    framebuffer->win = sfRenderWindow_create(mode, "EPI_REBIRTH", sfResize | sfClose, NULL);
    texture = sfTexture_create(800, 600);

    if (!framebuffer->win)
        return EXIT_FAILURE;
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(framebuffer->win, 30);

    while (sfRenderWindow_isOpen(framebuffer->win)) {
         while (sfRenderWindow_pollEvent(framebuffer->win, &event)) {
             if (event.type == sfEvtClosed)
                 sfRenderWindow_close(framebuffer->win);
         }
         my_put_pixel(framebuffer, x, y, sfRed);
         my_put_pixel(framebuffer, x + 20, y, sfRed);
         my_put_pixel(framebuffer, x + 40, y, sfRed);
         my_put_pixel(framebuffer, x + 60, y, sfRed);
         my_put_pixel(framebuffer, x + 80, y, sfRed);
         sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);
         sfRenderWindow_clear(framebuffer->win, sfBlack);
         sfRenderWindow_drawSprite(framebuffer->win, sprite, NULL);
         sfRenderWindow_display(framebuffer->win);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(framebuffer->win);
    framebuffer_destroy(framebuffer);
    return EXIT_SUCCESS;
}
int main()
{
    unsigned int width = 800;
    unsigned int height = 600;
    framebuffer_t *framebuffer = framebuffer_create(width, height);

    framebuffer->pixels[0] = 255;
    framebuffer->pixels[1] = 0;
    framebuffer->pixels[2] = 0;
    framebuffer->pixels[3] = 255;
    display_framebuffer(framebuffer);
    return 0;
}
