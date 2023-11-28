/*
** EPITECH PROJECT, 2023
** put_arr.c
** File description:
** put_arr
*/

#include "../INCLUDE/my.h"

void put_arr(char **array)
{
    while (*(array++) != NULL)
        my_printf("%s\n", *array);
}