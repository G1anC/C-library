/*
** EPITECH PROJECT, 2023
** putarr.c
** File description:
** putarr
*/

#include "../INCLUDE/my.h"

int putArray(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(1, array[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}