/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** sus
*/

#include "../../INCLUDE/my.h"

void tab_flag(char character, va_list list)
{
    char *flags = "csdpf";
    void (*fonctions[11])(va_list) = {flag_c, flag_s, flag_d, flag_p, flag_f};

    for (; *flags; flags++)
        if (character == *flags)
            (*fonctions[x])(list);
}

int my_printf(char const restrict *str, ...)
{
    int i = 0;
    va_list list;

    va_start(list, *str);
    for (i = 0; str[i]; i++) {
        if (str[i] == '%') {
            tab_flag(str[++i], list);
            continue;
        }
        put_char(str[i]);
    }
    va_end(list);
    return 0;
}
