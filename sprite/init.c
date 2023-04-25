/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** init.c
*/

#include ".././include/my_hunter.h"

void init_sprite(GLOBAL_T *ALL)
{
    ALL->pictures = malloc(sizeof(IMG_T) * 7);

    init_sprite_oiseau(ALL);
    init_sprite_fond(ALL);
    init_sprite_viseur(ALL);
    init_sprite_go(ALL);
    init_sprite_start(ALL);
    init_sprite_unit(ALL);
    init_sprite_dec(ALL);
}

void init_sprite_oiseau (GLOBAL_T *ALL)
{
    PIC[0].oiseautexture = sfTexture_createFromFile("picture/oiseau.pnj", NULL);
    PIC[0].oiseauSprite = sfSprite_create();
    PIC[0].oiseauP.x = 10;
    PIC[0].oiseauP.y = 100;
    PIC[0].oiseau.left = 0;
    PIC[0].oiseau.top = 0;
    PIC[0].oiseau.height = 183.6;
    PIC[0].oiseau.width = 168.6;
    PIC[0].clock = sfClock_create();
    float seconds;

    sfSprite_setTexture(PIC[0].oiseauSprite, PIC[0].oiseautexture, sfTrue);
    sfSprite_setPosition(PIC[0].oiseauSprite, PIC[0].oiseauP);
    sfSprite_setTextureRect(PIC[0].oiseauSprite, PIC[0].oiseau);
}

void init_sprite_fond (GLOBAL_T *ALL)
{
    PIC[1].fondtexture = sfTexture_createFromFile("picture/fond.jpg", NULL);
    PIC[1].fondSprite = sfSprite_create();
    PIC[1].fondP.x = 0;
    PIC[1].fondP.y = 0;

    sfSprite_setTexture(PIC[1].fondSprite, PIC[1].fondtexture, sfTrue);
    sfSprite_setPosition(PIC[1].fondSprite, PIC[1].fondP);
}

void init_sprite_viseur (GLOBAL_T *ALL)
{
    PIC[2].viseurtexture = sfTexture_createFromFile("picture/viseur.png", NULL);
    PIC[2].viseurSprite = sfSprite_create();
    PIC[2].viseurP.x = 0;
    PIC[2].viseurP.y = 0;
    PIC[2].viseurscale.x = 0.6;
    PIC[2].viseurscale.y = 0.6;

    sfSprite_setTexture(PIC[2].viseurSprite, PIC[2].viseurtexture, sfTrue);
    sfSprite_setPosition(PIC[2].viseurSprite, PIC[2].viseurP);
    sfSprite_setScale(PIC[2].viseurSprite, PIC[2].viseurscale);
}
