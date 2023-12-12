/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"
#include <stdio.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

char **get_file(char *name)
{
    int i = 0;
    size_t size = 0;
    char **result = malloc(10000);
    FILE *file = fopen(name, "r");

    if (!fopen(name, "r")) 
        exit_err("ERROR : Invalid file provided.\n");
    while (getline(&result[i++], &size, file) != EOF);
    result[i] = NULL;
    fclose(file);
    return result;
}