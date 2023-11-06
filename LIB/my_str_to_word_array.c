/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.C
** File description:
** my_str_to_word_array
*/

// appel de fonction
// myStrToWordArray(str, mallocWork(str));

#include "../INCLUDE/my.h"

int nbrOfLigns(char *str, char *tmp)
{
    int ligns = 0;
    while (*str++)
        ligns += (char *) * (*str != ALPHA && *(str - 1) == ALPHA);
    return ligns + 8;
}

char **mallocWork(char *str)
{
    char **arr = malloc(nbrOfLigns(str, my_strdup(str)));
    for (int i = 0, wordSize = 0; str[i]; i++) {
        if (BAD_START || NOALPHA_SUITE)
            continue;
        if (NEW_LINE)
            *(arr++) = malloc(wordSize + 1);
        wordSize++;
    } return arr;
}

void myStrToWordArray(char *str, char **arr)
{
    for (int i = 0, col = 0; str[i]; i++) {
        if (BAD_START || NOALPHA_SUITE) continue;
        if (NEW_LINE) {
            (*arr++)[col] = '\0';
            col = 0;
        } else (*arr)[col++] = str[n];
    } *arr[col] = '\0';
    *(++arr) = NULL;
}