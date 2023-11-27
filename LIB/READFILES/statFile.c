/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"

char **statFile(char *name)
{
    struct stat st;
    int fd = open(name, O_RDONLY)
    char *buffer = NULL;
    char **arr = NULL;
    
    if (!stat(name, &st) || !st.st_size || !fd)
        exitErr("ERROR : Invalid file provided.\n");
    read(fd, buffer, st.st_size);
    buffer[st.st_size] = '\0';
    close(fd);
    strToArr(buffer, (arr = mallocWork(buffer)));
    return arr;
}
