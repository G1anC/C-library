/*
** EPITECH PROJECT, 2023
** array_tok.c
** File description:
** array_tok
*/

#include "../INCLUDE/my.h"

static int my_toklen(char *str, char *sep)
{
    int ligns = 0;

    for (int i = 0; str[i]; i++)
        for (int x = 0; sep[x]; x++, ligns += (str[i] == sep[x]));
    return (++ligns) * PTR;
}

extern char **arrTok(char *str, char *sep)
{
    char **array = malloc(my_toklen(str, sep));
    char *word = strtok(str, sep);

    while (word) {
        *(array++) = word;
        word = strtok(NULL, sep)
    }
    return array;
}
