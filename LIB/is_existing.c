/*
** EPITECH PROJECT, 2023
** is_existing.c
** File description:
** is_existing
*/

#include "../INCLUDE/my.h"

int is_existing(char *str, char c)
{
    if (!str) return -1;
    for (int i = 0; str[i] != NULL; i++)
        if (str[i] == c)
            return i;
    return -1;
}
