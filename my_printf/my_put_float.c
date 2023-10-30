/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** description
*/

#include "include/my.h"

double my_put_float(double nbr)
{
    int x = (int)nbr, i = 0;

    if (nbr == x) {
        my_printf("%d.000000", x);
        return nbr;
    } if (nbr > 0) {
        positiv(nbr, x);
        return nbr;
    } if (nbr < 0) {
        negativ(nbr, x);
        return nbr;
    }
}

void positiv(double f, int x)
{
    int i = 0;

    my_put_nbr(x);
    my_putchar('.');
    f = f - x;
    while (i < 5) {
        f = f * 10;
        x = (int) f;
        my_put_nbr(x);
        f = f - x;
        i++;
    }
    my_put_nbr(x);
}

void negativ(double f, int x)
{
    int i = 0;

    if (x == 0)
        my_putchar('-');
    my_put_nbr(x);
    f = f - x;
    f = f * -1;
    my_putchar('.');
    while (i < 5) {
        f = f * 10;
        x = (int)f;
        my_put_nbr(x);
        f = f - x;
        i++;
    }
    my_put_nbr(x);
}
