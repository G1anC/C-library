/*
** EPITECH PROJECT, 2022
** putFloat
** File description:
** description
*/

#include "../../INCLUDE/my.h"

void my_pfloat(double f, int x)
{
    if (x < 0) {
        putChar('-');
        f *= -1;
    }
    my_printf("%d.", (int)f);
    for (int i = 0; i++ < 5; f *= 10) {
        f -= (int)f;
        putNbr((int)f);
    }
    putNbr((int)f);
}

void putFloat(double nbr)
{
    int x = (int)nbr;

    if (nbr == x)
        my_printf("%d.000000", x);
    else
        my_pfloat(nbr, x);
}

void flag_f(va_list list)
{
    putFloat(va_arg(list, double));
}
