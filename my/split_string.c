/*
** EPITECH PROJECT, 2023
** split_string.c
** File description:
** split_string
*/

#include "include/my.h"

int number_of_ligns(char *str, char spliter)
{
    int n_o_ligns = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == spliter) {
            n_o_ligns++;
        }
    }
    return n_o_ligns + 1;
}

char **malloc_work(int n_o_ligns)
{
    int i = 0;
    char **array = malloc(sizeof(char *) * n_o_ligns);

    for (; i < n_o_ligns; i++)
        array[i] = malloc(sizeof(char) * 100);
    array[i] = malloc(sizeof(char));
    return array;
}

char **split_string(char *str, char spliter)
{
    int row = 0, col = 0, n_o_ligns = number_of_ligns(str, spliter);
    char **array = malloc_work(n_o_ligns);

    for (int i = 0; str[i] != '\0'; i++, col++) {
        if (str[i] == spliter) {
            array[row++][col] = '\0';
            col = 0;
            continue;
        } array[row][col++] = str[i];
    } array[row][col] = '\0';
    array[row][++col] = NULL;
    return array;
}