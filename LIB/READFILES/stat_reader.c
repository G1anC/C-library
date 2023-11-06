/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"

char **stat_reader(char *name)
{
    struct stat st;
    int fd = open(name, O_RDONLY), x = 0;
    char *buffer = NULL;

    if (!stat(name, &st) || st.st_size == 0 || fd == -1)
        return exitErr("Error: File is empty or inexistent\n");
    read(fd, buffer, st.st_size);
    buffer[st.st_size] = '\0';
    close(fd);
    return my_str_to_word_array(buffer);
}