/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.C
** File description:
** my_str_to_word_array
*/

#include "include/my.h"

int nbr_of_ligns(char const *str)
{
    int ligns = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i - 1] != ' ')
            ligns++;
    }
    return ligns;
}

char** malloc_work(char const *str)
{
    int ligns = nbr_of_ligns(str);
    char **array = malloc(sizeof(char*) * (ligns + 1));
    for (int x = 0; x < (ligns); x++) {
        array[x] = malloc(sizeof(char) * 100);
    }
    return array;
}

char **my_str_to_word_array(char const *str)
{
    char **array = malloc_work(str);
    int row = 0, col = 0, n = 0;

    for (; str[n] != '\0'; n++) {
        if (str[n] == ' ' && str[n - 1] != ' ') {
            array[row][col] = '\0';
            row++;
            col = 0;
            continue;
        } if (str[n - 1] == ' ' && str[n] == ' ')
            continue;
        array[row][col++] = str[n];
    }
    array[row][col] = '\0';
    array[row + 1] = NULL;
    return array;
}
