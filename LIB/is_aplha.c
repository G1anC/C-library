/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** is_alpha.c
*////

#include "../INCLUDE/my.h"

int is_alpha(char c)
{
    return ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9'));
}
