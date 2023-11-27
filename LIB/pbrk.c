/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "my.h"

static char *cmpCharacters(char _c1, char restrict *_cmp)
{
    for (size_t i = 0; _cmp[i]; i++)
        if (_c1 == _cmp[i])
            return &_c1;
    return NULL;
}

extern char *pbrk(char *str, char restrict *_toFind)
{
    char *res = NULL;

    for (size_t i = 0; str[i]; i++)
        if ((res = cmpCharacters(str[i], _toFind)) != NULL)
            return res;
    return NULL;
}