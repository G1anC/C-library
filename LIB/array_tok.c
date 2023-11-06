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
            ligns = (str[i] == sep[x]) ? ligns++ : ligns;
        }
    } return ligns++;
}

char **array_tok(char *str, char *sep)
{
    int i = 0;
    char **array = malloc(sizeof(char *) * my_toklen(str, sep));
    char *word = strtok(str, sep);

    for (i = 0; word; i++) {
        array[i] = word;
        word = strtok(NULL, sep);
    }
    return array;
}
