/*
** EPITECH PROJECT, 2023
** my_arraylen.c
** File description:
** my_arraylen
*/

extern int arrlen(char **array)
{
    int i = 0;

    while(array[i++]);
    return i;
}
