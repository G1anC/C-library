/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "my.h"

static char *cmp_characters(char _c1, char *_cmp)
{
    for (size_t i = 0; _cmp[i]; i++)
        if (_c1 == _cmp[i])
            return "OUIII";
    return NULL;
}

extern char *pbrk(char *str, char *_toFind)
{
    for (size_t i = 0; str[i]; i++)
        if (cmp_characters(str[i], _toFind))
            return &str[i];
    return NULL;
}