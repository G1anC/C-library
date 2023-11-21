/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** description
*/

#include "../INCLUDE/my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest)
    int i = 0;

    while (src[i++])
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
