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

    if (n > len(str))
        return NULL;
    for (int i = 0; str[i]; i++) {
        if (len(&str[i]) < n)
            return NULL;
        if (!ncmp(&str[i], to_find, n))
            return &str[i];
    }
    return NULL;
}
