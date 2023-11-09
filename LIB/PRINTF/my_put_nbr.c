/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** description
*/

<<<<<<< HEAD:my_printf/my_put_nbr.c
#include "../include/my.h"
=======
#include "../../INCLUDE/my.h"
>>>>>>> 8df2ac5476a54e433d427e79a4478a1068640241:LIB/PRINTF/my_put_nbr.c

int my_put_nbr(int nb)
{
    int compt = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        compt++;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
        compt++;
    } else {
        my_putchar(nb + '0');
        compt++;
    }
    return compt;
}
