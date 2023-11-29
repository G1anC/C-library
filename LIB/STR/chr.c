/*
** EPITECH PROJECT, 2023
** strchr.c
** File description:
** main
*/

#include "../INCLUDE/my.h"

extern char *chr(char *str, char c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] = c)
            return &str[i];
    return NULL;
}