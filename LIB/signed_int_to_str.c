/*
** EPITECH PROJECT, 2022
** int to str
** File description:
** int to str
*/

#include "../INCLUDE/my.h"

char *int_to_str(int n)
{
    char *str = malloc(sizeof(char) * intlen(n) + 1);
    char temp[2];

    if (n == 0)
        return "\0";
    temp[0] = (n % 10) + '0';
    temp[1] = '\0';
    str = my_strdup(int_to_str(n / 10));
    str = my_strcat(str, temp);
    return str;
}

char *signed_int_to_str(int n)
{
    char *str = malloc(sizeof(char) * intlen(n) + 2);
    char *minus = "-";
    int is_neg = 0;
    int i = 0;

    if (n < 0) {
        n = -n;
        is_neg = 1;
    }
    str = my_strdup(int_to_str(n));
    i = my_strlen(str);
    if (is_neg == 1) {
        while (i >= 0) {
            str [i + 1] = str[i];
            i--;
        }
    str[0] = '-';
    }
    return str;
}
