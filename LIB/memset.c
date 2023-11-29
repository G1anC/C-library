/*
** EPITECH PROJECT, 2018
** realo
** File description:
** realo function
*/

#include "../INCLUDE/my.h"

void *mem_set(void *ptr, int value, size_t n)
{
    unsigned char *new_ptr = (unsigned char *)ptr;
    size_t i = 0;

    for (; i < n; i++)
        new_ptr[i] = (unsigned char)value;
    return new_ptr;
}