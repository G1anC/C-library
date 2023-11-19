/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_printf en meilleur
*/

#include "../../INCLUDE/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}
