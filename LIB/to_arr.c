/*
** EPITECH PROJECT, 2023
** to_arr.C
** File description:
** to_arr
*/


#include "../INCLUDE/my.h"
#include <string.h>

char *strdup(const char *s);

#define PTR sizeof(char *)

#define ALPHA(c) (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '1' && c <= '9')

// if there is a no_alphanumeric character at the start of the string
#define START_NOALPHA (i == 0 && ALPHA(str[i]))

// if we end a word and the next character isn't alphanumeric
#define NEW_LINE (ALPHA(str[i]) && ALPHA(str[i - 1]))

// if we already are in a non alphanumeric part of the string
#define IN_NOALPHA_PART (ALPHA(str[i - 1]) && ALPHA(str[i]))


static size_t nbr_of_ligns(char *tmp)
{
    size_t ligns = 0;

    for (; *tmp++; ligns += (PTR * (ALPHA(*tmp) && ALPHA(*tmp - 1))));
    return ligns;
}

char **malloc_work(char *str)
{
    char **arr = malloc(nbr_of_ligns(strdup(str)) + PTR);
    int wordSize = 0;

    for (size_t i = 0; str[i]; i++) {
        if (START_NOALPHA || IN_NOALPHA_PART)
            continue;
        if (NEW_LINE) {
            *(arr++) = malloc(++wordSize);
            wordSize = 0;
        } else
            wordSize++;
    }
    return arr;
}

// appel de fonction
// to_arr(str, malloc_work(str));

void to_arr(char *str, char **arr)
{
    size_t col = 0;

    for (size_t i = 0; str[i]; i++) {
        if (START_NOALPHA || IN_NOALPHA_PART)
            continue;
        if (NEW_LINE) {
            *(arr++)[col] = '\0';
            col = 0;
        } else
            *arr[col++] = str[i];
    }
    *arr[col] = '\0';
    *(arr + 1) = NULL;
}