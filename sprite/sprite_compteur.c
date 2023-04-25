/*
** EPITECH PROJECT, 2023
** Quentin
** File description:
** sprite
*/

#include ".././include/my_hunter.h"

void init_sprite_unit (GLOBAL_T *ALL)
{
    PIC[5].unittexture = sfTexture_createFromFile("picture/chiffre.png", NULL);
    PIC[5].unitSprite = sfSprite_create();
    PIC[5].unitP.x = 2500;
    PIC[5].unitP.y = 2100;
    PIC[5].unit.left = 0;
    PIC[5].unit.top = 0;
    PIC[5].unit.height = 177;
    PIC[5].unit.width = 95;

    sfSprite_setTexture(PIC[5].unitSprite, PIC[5].unittexture, sfTrue);
    sfSprite_setPosition(PIC[5].unitSprite, PIC[5].unitP);
    sfSprite_setTextureRect(PIC[5].unitSprite, PIC[5].unit);
}

void init_sprite_dec (GLOBAL_T *ALL)
{
    PIC[6].dectexture = sfTexture_createFromFile("picture/chiffre.png", NULL);
    PIC[6].decSprite = sfSprite_create();
    PIC[6].decP.x = 2415;
    PIC[6].decP.y = 2100;
    PIC[6].dec.left = 0;
    PIC[6].dec.top = 0;
    PIC[6].dec.height = 177;
    PIC[6].dec.width = 95;

    sfSprite_setTexture(PIC[6].decSprite, PIC[6].dectexture, sfTrue);
    sfSprite_setPosition(PIC[6].decSprite, PIC[6].decP);
    sfSprite_setTextureRect(PIC[6].decSprite, PIC[6].dec);
}

void draw_sprite (GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, PIC[1].fondSprite, NULL);
    sfRenderWindow_drawSprite(WIN, PIC[0].oiseauSprite, NULL);
    sfRenderWindow_drawSprite(WIN, PIC[2].viseurSprite, NULL);
    sfRenderWindow_drawSprite(WIN, PIC[3].GOSprite, NULL);
    sfRenderWindow_drawSprite(WIN, PIC[5].unitSprite, NULL);
    sfRenderWindow_drawSprite(WIN, PIC[6].decSprite, NULL);
}
