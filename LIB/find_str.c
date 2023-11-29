/*
** EPITECH PROJECT, 2022
** strstr
** File description:
** description
*/

#include "../INCLUDE/my.h"

char *find_str(const char *str, const char *to_find)
{
    int n = len(to_find);
    char *rest;

    if (n > len(str))
        return NULL;
    for (int i = 0; str[i]; i++) {
        rest = &str[i];
        if (len(rest) < n)
            return NULL;
        if (!ncmp(rest, to_find, n))
            return rest;
    }
    return NULL;
}
