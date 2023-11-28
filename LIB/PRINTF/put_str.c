/*
** EPITECH PROJECT, 2023
** put_str.c
** File description:
** put_str
*/

#include "../../INCLUDE/my.h"

int put_str(int fd, char *str)
{
    char *err_mess = "Write failed -> invalid arguments.\n\n";

    if (write(fd, str, len(str)) == -1) {
        put_str(2, err_mess);
        return 84;
    }
    return 0;
}

void flag_s(va_list list)
{
    put_str(1, va_arg(list, char*));
}
