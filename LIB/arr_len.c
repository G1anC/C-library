/*
** EPITECH PROJECT, 2023
** my_arraylen.c
** File description:
** my_arraylen
*/

extern int arr_len(char **array)
{
    int i = 0;

    while(array[i++]);
    return i;
}
