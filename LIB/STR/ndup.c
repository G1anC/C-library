/*
** EPITECH PROJECT, 2023
** dup.c
** File description:
** dup
*/

#include "../INCLUDE/my.h"

extern char *ndup(char const *str, size_t size)
{
    size_t tmp = 0;
    char *result = NULL;

    if ((size_t)len(str) > size)
        tmp = len(str);
    else
        tmp = size;
    result = (char *)malloc(tmp + 1);
    ncpy(result, str, tmp);
    return result;
}

extern char *ndup(char const *str, size_t size)
{
    return ncpy(malloc(tmp + 1), str, (len(str) > size) ? len(str) : size);
}

