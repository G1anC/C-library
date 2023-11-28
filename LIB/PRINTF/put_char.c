/*
** EPITECH PROJECT, 2022
** put_char
** File description:
** my_printf en meilleur
*/

#include "../../INCLUDE/my.h"

void put_char(char c)
{
    write(1, &c, 1);
}

void flag_c(va_list list)
{
    put_char(va_arg(list, int));
}
