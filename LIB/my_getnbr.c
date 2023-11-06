/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** description
*/

#include "INCLUDE/my.h"

int	my_getnbr(char *string)
{
    int nbr = 0;
    int j = 1;
    int i = 0;
    while (string[i] == '+' || string[i] == '-') {
        if (string[i] == '-') {
            j = j * -1;
            i = i + 1;
        }
    }
    for (i; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + string[i] - '0';
        } else
            return (nbr * j);
    }
    return (nbr * j);
}
