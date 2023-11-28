/*
** EPITECH PROJECT, 2022
** putNbr
** File description:
** description
*/

#include "../../INCLUDE/my.h"

void putNbr(int nb)
{
    if (nb < 0) {
        putChar('-');
        nb *= -1;
    }
    if (nb >= 10) {
        putNbr(nb / 10);
        putNbr(nb % 10);
    } else {
        putChar(nb + '0');
    }
}

void flag_d(va_list list)
{
    putNbr(va_arg(list, int));
}
