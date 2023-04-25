/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** init2
*/

#include ".././include/my_hunter.h"

void init (GLOBAL_T *ALL)
{
    init_window(ALL);
    init_sprite(ALL);
}

void init_window(GLOBAL_T *ALL)
{
    MODE.bitsPerPixel = 64;
    MODE.height = 1200;
    MODE.width = 1600;
    WIN = sfRenderWindow_create(MODE, "window", sfResize | sfClose, NULL);
}

void init_sprite_go (GLOBAL_T *ALL)
{
    PIC[3].GOtexture = sfTexture_createFromFile("picture/go.png", NULL);
    PIC[3].GOSprite = sfSprite_create();
    PIC[3].GOP.x = 10000;
    PIC[3].GOP.y = 10000;

    sfSprite_setTexture(PIC[3].GOSprite, PIC[3].GOtexture, sfTrue);
    sfSprite_setPosition(PIC[3].GOSprite, PIC[3].GOP);
}

void init_sprite_start (GLOBAL_T *ALL)
{
    PIC[4].starttexture = sfTexture_createFromFile("picture/go.png", NULL);
    PIC[4].startSprite = sfSprite_create();
    PIC[4].startP.x = 100;
    PIC[4].startP.y = 100;

    sfSprite_setTexture(PIC[4].startSprite, PIC[4].starttexture, sfTrue);
    sfSprite_setPosition(PIC[4].startSprite, PIC[4].startP);
}
