/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my_putstr
*/

#include "../../INCLUDE/my.h"

void my_putchar(char str)
{
    write(1, &str, 1);
}

int my_putstr(int fd, char *str)
{
    char *err_mess = "Write failed -> invalid arguments";

    if (write(fd, str, my_strlen(str)) == -1) {
        my_putstr(2, err_mess);
        return 84;
    } return 0;
}
