/*
** EPITECH PROJECT, 2023
** split_string.c
** File description:
** split_string
*/

#include "../INCLUDE/my.h"

#define PTR sizeof(char *)

static char **algo(char *str, char **arr, char *sep, int pos)
{
    int i = 0;

    for (; !is_existing(sep, str[i]) && str[i]; i++);
    arr[pos] = malloc(i + 1);
    if ((i > 0 && !is_existing(sep, str[i - 1])) && is_existing(sep, str[i])) {
        ncpy(arr[pos], str, i);
        pos += len(arr[pos]);
    }
    if (!str[i]) {
        if (i > 0 && !is_existing(sep, str[i - 1]))
            ncpy(arr[pos++], str, i);
        arr[pos] = NULL;
        return arr;
    }
    return algo(&str[i + 1], arr, sep, pos);
}

extern char** split_string(char *str, char *sep)
{
    int count = 1;

    for (int i = 0; str[i]; count += (is_existing(sep, str[i++])));
    return algo(str, malloc(PTR * (count + 1)), sep, 0);
}
