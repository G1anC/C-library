/*
** EPITECH PROJECT, 2022
** put_nbr
** File description:
** description
*/

#include "../../INCLUDE/my.h"

void put_nbr(int nb)
{
    if (nb < 0) {
        put_char('-');
        nb *= -1;
    }
    if (nb >= 10) {
        put_nbr(nb / 10);
        put_nbr(nb % 10);
    } else {
        put_char(nb + '0');
    }
}

void flag_d(va_list list)
{
    put_nbr(va_arg(list, int));
}
