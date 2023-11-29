/*
** EPITECH PROJECT, 2023
** index.c
** File description:
** index
*/

#include "../INCLUDE/my.h"

extern int index(char *str, char c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return i;
    return -1;
}
