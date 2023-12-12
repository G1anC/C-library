/*
** EPITECH PROJECT, 2023
** free_arr.c
** File description:
** free
*/

#include "../INCLUDE/my.h"

void free_arr(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
