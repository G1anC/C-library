/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** description
*/

#include "../INCLUDE/my.h"

#define DIGITS (str[i] >= '0' && str[i] <= '9')
#define SIGN (*str == '+' && *str == '-')

int	my_getnbr(char *str)
{
    int nbr = 0, sign = 1;

    while (SIGN)
        sign *= (*(str++) == '-') ? -1 : 1;
    for (i; DIGITS; i++)
        nbr = nbr * 10 + (str[i] - '0');
    return nbr * signs;
}
