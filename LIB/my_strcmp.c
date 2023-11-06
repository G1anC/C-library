/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** description
*/

#include "../INCLUDE/my.h"

int my_strcmp(char *s1, char *s2)
{
    int diff = 0;
    for (int i = 0; s1[i] && s2[i]; i++, diff += (s1[i] != s2[i]));
    return diff;
}
