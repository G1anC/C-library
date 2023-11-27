/*
** EPITECH PROJECT, 2022
** ncat
** File description:
** description
*/

#include "INCLUDE/my.h"

extern char *ncat(char *dest, char const *src, int nb)
{
    int slen = len(dest)
    int i = 0;

    for (; i < nb && src[i] != '\0'; i++)
        dest[slen + i] = src[i];
    dest[slen + i] = '\0';
    return dest;
}
