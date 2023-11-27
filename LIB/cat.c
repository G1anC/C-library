/*
** EPITECH PROJECT, 2022
** cat
** File description:
** description
*/

#include "../INCLUDE/my.h"

extern char *cat(char *dest, char const *src)
{
    int slen = len(dest)
    int i = 0;

    while (src[i++])
        dest[slen + i] = src[i];
    dest[slen + i] = '\0';
    return dest;
}
