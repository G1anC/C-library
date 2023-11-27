/*
** EPITECH PROJECT, 2023
** strToArr.C
** File description:
** strToArr
*/

// appel de fonction
// strToArr(str, mallocWork(str));

#include "../INCLUDE/my.h"

#define PTR sizeof(char *)

int nbrOfLigns(char *tmp)
{
    int ligns = 0;

    for (; *tmp++; ligns += (PTR * (*tmp != ALPHA && *(tmp - 1) == ALPHA)));
    return ligns;
}

char **mallocWork(char *str)
{
    char **arr = malloc(nbrOfLigns(dup(str)) + PTR);
    int wordSize = 0;

    for (int i = 0; str[i]; i++) {
        if (BAD_START || NOALPHA_SUITE)
            continue;
        if (NEW_LINE) {
            *(arr++) = malloc(wordSize + 1);
            wordSize = 0;
        } else
            wordSize++;
    }
    return arr;
}

void strToArr(char *str, char **arr)
{
    int col = 0;

    for (int i = 0; str[i]; i++) {
        if (BAD_START || NOALPHA_SUITE)
            continue;
        if (NEW_LINE) {
            *(arr++)[col] = '\0';
            col = 0;
        } else
            (*arr)[col++] = str[i];
    }
    *arr[col] = '\0';
    *(++arr) = NULL;
}