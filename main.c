/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "INCLUDE/my.h"

int core(project_t project)
{
    if (0)
        return 84;
    return 0;
}

int help(void) {
    my_printf("");
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    return (!my_strncmp("-h", av[1], 2)) ? help()
    : core(&(project_t) {.data = 0, .arr = myStrToWordArray(readfile(av[1]))});
}

// "editor.fontFamily": "Fira Code, 'Courier New', monospace",
// "workbench.settings.applyToAllProfiles": [
// "editor.fontLigatures"
// ],
// "editor.letterSpacing": -0.4,
// "editor.fontLigatures": true,