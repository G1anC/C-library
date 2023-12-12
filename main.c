/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "INCLUDE/my.h"

int core(p_t* p)
{
    if (error_handler(p))
        exit_err("wrong map");
    return 0;
}

int main(int ac, char **av)
{
    char **map;

    if (ac != 2 || strcmp("-h", av[1]))
        exit_err("You needa give a map.\n");
    map = stat_file(av[1]);
    return (core(&(p_t){map, NULL, {0, 0, 0}}));
    return 0;
}