/*
** EPITECH PROJECT, 2023
** str_to_arr.C
** File description:
** str_to_arr
*/


#include "../INCLUDE/my.h"

#define PTR sizeof(char *)

// if there is a no_alphanumeric character at the start of the string
#define START_NOALPHA (i == 0 && str[i] != ALPHA)

// if we end a word and the next character isn't alphanumeric
#define NEW_LINE (str[i] != ALPHA && str[i - 1] == ALPHA)

// if we already are in a non alphanumeric part of the string
#define IN_NOALPHA_PART (str[i - 1] != ALPHA && str[i] != ALPHA)

static size_t nbr_of_ligns(char *tmp)
{
    size_t ligns = 0;

    for (; *tmp++; ligns += (PTR * (*tmp != ALPHA && *(tmp - 1) == ALPHA)));
    return ligns;
}

extern char **malloc_work(char *str)
{
    char **arr = malloc(nbr_of_ligns(dup(str)) + PTR);
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
// str_to_arr(str, malloc_work(str));

extern void str_to_arr(char restrict *str, char **arr)
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