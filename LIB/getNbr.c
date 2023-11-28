/*
** EPITECH PROJECT, 2022
** getNbr
** File description:
** description
*/

#include "../INCLUDE/my.h"

extern int getNbr(char *str)
{
    int nbr = 0;
    int sign = 1;

    while (SIGN)
        sign *= (*(str++) == '-') ? -1 : 1;
    while (DIGITS)
        nbr = nbr * 10 + (*(str++) - '0');
    return nbr * sign;
}
