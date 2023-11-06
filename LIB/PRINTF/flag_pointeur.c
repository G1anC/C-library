/*
** EPITECH PROJECT, 2022
** flag_pointeur.c
** File description:
** sus
*/

#include <stdlib.h>
#include <stdarg.h>

void flag_p(va_list list)
{
    int i = va_arg(list, void*);
    int *a = &i;
    my_putstr("Ox");
    argx(*a);
}
