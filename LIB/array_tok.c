/*
** EPITECH PROJECT, 2023
** array_tok.c
** File description:
** array_tok
*/

#include "../INCLUDE/my.h"

int my_toklen(char *str, char *sep)
{
    int ligns = 0;
    for (int i = 0; str[i]; i++) {
        for (int x = 0; sep[x]; x++) {
            ligns += (str[i] == sep[x]);
        }
    } return ++ligns * 8;
}

char **array_tok(char *str, char *sep)
{
    char **array = malloc(my_toklen(str, sep)), *word = strtok(str, sep);

    for (int i = 0; word; i++) {
        array[i] = word;
        word = strtok(NULL, sep);
    } return array;
}
