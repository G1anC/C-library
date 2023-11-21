/*
** EPITECH PROJECT, 2023
** putarr.c
** File description:
** putarr
*/

#include "../INCLUDE/my.h"

void putArray(char **array)
{
    while (*(array++) != NULL)
        my_printf("%s\n", *array);
}