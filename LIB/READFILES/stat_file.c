/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"

char **stat_file(char *fileName)
{
    struct stat st;
    char **arr = NULL;
    char *buffer = NULL;
    int fd = open(fileName, O_RDONLY);
    
    if (!stat(fileName, &st) || !st.st_size || !fd)
        exit_err("ERROR : Invalid file provided.\n");
    read(fd, buffer, st.st_size);
    close(fd);
    buffer[st.st_size] = '\0';
    to_arr(buffer, (arr = malloc_work(buffer)));
    return arr;
}
