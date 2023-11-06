/*
** EPITECH PROJECT, 2023
** my_str_ot_int_array.c
** File description:
** my_str_to_int_array
*/

#include "../INCLUDE/my.h"

int my_getnbr(char *str);

int int_nbr_of_ligns(char **array)
{
    int i = 0;
    for(; array[i] != NULL; i++);
    return i;
}

int **malloc_int_work(char **char_array)
{
    int ligns = int_nbr_of_ligns(char_array);
    int **array = 0;

    array = malloc(sizeof(int *) * (ligns + 1));
    for (int i = 0; i < ligns; i++) {
        array[i] = malloc(sizeof(int)* 1000);
    }
    return array;
}

int **my_char_to_int_array(char **char_array)
{
    int **array = malloc_int_work(char_array);
    int x = 0;

    for (; char_array[x] != NULL; x++) {
        array[x] = my_getnbr(char_array[x]);
    }
    array[x + 1] = NULL;
    return array;
}
