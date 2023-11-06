/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **getline_reader(char *name)
{
    char *buffer = NULL;
    int i = 0;
    char **result = malloc(sizeof(char *) * 10000);
    size_t size = 0;
    ssize_t readf;
    FILE *file = fopen(name, "r");

    if (!file) {
        my_putstr(2, "Error: File is inexistent or unreadable\n");
        return NULL;
    } do {
        readf = getline(&result[i], &size, file);
        if (my_strlen(result[i]) == 1 && result[i][0] == '\n') {
            my_putstr(2, "Error: File is inadequate\n");
            return NULL;
        }
    } while (readf != -1);
    result[i] = NULL;
    fclose(file);
    return result;
}