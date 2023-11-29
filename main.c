/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "INCLUDE/my.h"

int core(p_t *p)
{
    for (;;) {
        if (/* ERROR */)
            return 84;
        if (0)
            continue;
        ;
    }
    return 0;
}

int help(void)
{
    exit_err("USAGE : Project\n"
        "\t--help : display help message\n"
        "\t-l : show i don't know\n");
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    return (!ncmp("-h", av[1], 2)) ?
            help() : core(&(p_t){0, to_arr(stat_file(av[1]))});
}
