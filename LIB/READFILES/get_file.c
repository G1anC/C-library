/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"

extern char **get_file(char restrict *name)
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