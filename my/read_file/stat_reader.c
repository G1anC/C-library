/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

char **stat_reader(char *name)
{
    struct stat st;
    int fd = open(name, O_RDONLY), x = 0;
    char *buffer = NULL;

    stat(name, &st);
    if (st.st_size == 0 || fd == -1) {
        my_putstr(2, "Error: File is empty or inexistent\n");
        return NULL;
    }
    x = read(fd, buffer, st.st_size);
    buffer[x] = '\0';
    close(fd);
    return my_str_to_word_array(buffer);
}