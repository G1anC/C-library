/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** sus
*/

#include <stdio.h>
#include <stdarg.h>
<<<<<<< HEAD:my_printf/my_printf.c
#include "../include/my.h"
=======
#include "../../INCLUDE/my.h"
>>>>>>> 8df2ac5476a54e433d427e79a4478a1068640241:LIB/PRINTF/my_printf.c

void tableau_flags_fonctions(char character, va_list list)
{
    char flags[11] = {'c', 's', 'i', 'd', '%', 'o', 'x', 'b', 'X', 'u'};
    void (*fonctions[11])(va_list) = {flag_c, flag_s, flag_i, flag_d,
            flag_pourcent,flag_o, flag_x, flag_b, flag_x_maj, flag_u};
    for (int x = 0; flags[x]; x++)
        if (character == flags[x])
            (*fonctions[x])(list);
}

int my_printf(char const *str, ...)
{
    int i = 0;
    va_list list;
    va_start(list, *str);

    for (i = 0; str[i]; i++) {
        if (str[i] == '%') {
            tableau_flags_fonctions(str[++i], list);
        } else {
            my_putchar(str[i]);
        }
    }
    va_end(list);
    return 0;
}
