/*
** EPITECH PROJECT, 2023
** my_print_array.c
** File description:
** my_print_array
*/

#include "../INCLUDE/my.h"

void putarr(char **arr)
{
    while (*(arr++))
        write(1, *arr, my_strlen(*arr));
}