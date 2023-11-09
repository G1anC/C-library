/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my_putstr
*/

<<<<<<< HEAD:my_printf/my_putstr.c
#include <stdio.h>
#include "../include/my.h"
=======
#include "../../INCLUDE/my.h"
>>>>>>> 8df2ac5476a54e433d427e79a4478a1068640241:LIB/PRINTF/my_putstr.c

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
