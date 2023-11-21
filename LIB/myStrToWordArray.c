/*
** EPITECH PROJECT, 2023
** myStrToWordArray.C
** File description:
** myStrToWordArray
*/

// appel de fonction
// myStrToWordArray(str, mallocWork(str));

#include "../INCLUDE/my.h"

#define PTR sizeof(char *)

int nbrOfLigns(char *str, char *tmp)
{
    int ligns = 0;

    for (; *str++; ligns += (PTR * (*str != ALPHA && *(str - 1) == ALPHA)));
    return ligns;
}

char **mallocWork(char *str)
{
    char **arr = malloc(nbrOfLigns(str, my_strdup(str)) + PTR);
    int wordSize = 0;

    for (int i = 0; str[i]; i++) {
        if (BAD_START || NOALPHA_SUITE) continue;
        if (NEW_LINE)
            *(arr++) = malloc(wordSize + 1);
        wordSize++;
    } return arr;
}

void myStrToWordArray(char *str, char **arr)
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