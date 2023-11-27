/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "INCLUDE/my.h"

int core(project_t *project)
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
    exitErr("USAGE : Project\n"
        "--help : display help message\n"
        "-l : show i don't know\n");
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    return (!ncmp("-h", av[1], 2)) ? help() : core(
    &(project_t) {
        0,
        strToArr(readfile(av[1]))
    });
}
