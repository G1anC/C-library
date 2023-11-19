/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** my_strdup
*/

#include "../INCLUDE/my.h"

char *my_strdup(char const *str)
{
    return (!str) ? NULL : my_strcpy(malloc(my_strlen(str) + 1), str);
}
