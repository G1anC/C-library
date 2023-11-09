/*
** EPITECH PROJECT, 2022
** my_strncmp
** File description:
** description
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int diff = 0;
    for (int i = 0; i < n; i++, diff += (s1[i] != s2[i]));
    return diff;
}