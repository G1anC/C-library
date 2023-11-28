/*
** EPITECH PROJECT, 2023
** strToArr.C
** File description:
** strToArr
*/


#include "../INCLUDE/my.h"

#define PTR sizeof(char *)

// if there is a no_alphanumeric character at the start of the string
#define START_NOALPHA (i == 0 && str[i] != ALPHA)

// if we end a word and the next character isn't alphanumeric
#define NEW_LINE (str[i] != ALPHA && str[i - 1] == ALPHA)

// if we already are in a non alphanumeric part of the string
#define IN_NOALPHA_PART (str[i - 1] != ALPHA && str[i] != ALPHA)

static size_t nbrOfLigns(char *tmp)
{
    size_t ligns = 0;

    for (; *tmp++; ligns += (PTR * (*tmp != ALPHA && *(tmp - 1) == ALPHA)));
    return ligns;
}

extern char **mallocWork(char *str)
{
    char **arr = malloc(nbrOfLigns(dup(str)) + PTR);
    int wordSize = 0;

    for (size_t i = 0; str[i]; i++) {
        if (START_NOALPHA || IN_NOALPHA_PART)
            continue;
        if (NEW_LINE) {
            *(arr++) = malloc(wordSize + 1);
            wordSize = 0;
        } else
            wordSize++;
    }
    return arr;
}

// appel de fonction
// strToArr(str, mallocWork(str));

extern void strToArr(char restrict *str, char **arr)
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