/*
** EPITECH PROJECT, 2022
** ncmp
** File description:
** description
*/

extern int ncmp(char const *s1, char const *s2, int n)
{
    int diff = 0;

    for (int i = 0; i++ < n; diff += (s1[i] != s2[i]));
    return diff;
}
