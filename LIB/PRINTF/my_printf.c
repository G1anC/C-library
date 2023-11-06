/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** sus
*/

#include <stdio.h>
#include <stdarg.h>
#include "../../INCLUDE/my.h"

void tableau_flags_fonctions(char const *str, int i, va_list list)
{
    char flags[13] = {'c', 's', 'i', 'd', '%',
                    'o', 'p', 'x', 'b', 'X',
                    'f', 'u'};
    void (*fonctions[13])(va_list) = {flag_c, flag_s, flag_i, flag_d,
            flag_pourcent,flag_o, flag_p, flag_x, flag_b, flag_x_maj,
            my_put_float, flag_u};

    for (int x = 0; flags[x] != '\0'; x++) {
        if (str[i] == flags[x]) {
            (*fonctions[x])(list);
        }
    }
}

int my_printf(char const *str, ...)
{
    int i = 0;
    va_list list;
    va_start(list, *str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            tableau_flags_fonctions(str, i, list);
        } else
            my_putchar(str[i]);
    }
    va_end(list);
}
