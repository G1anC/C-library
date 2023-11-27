/*
** EPITECH PROJECT, 2022
** cmp
** File description:
** description
*/

#include "../INCLUDE/my.h"

extern int cmp(char *_s1, char *_s2)
{
    for (int i = 0; _s1[i] && _s2[i] && (_s1[i] == _s2[i]); i++);
    return (_s1[i] != _s2[i]);
}
