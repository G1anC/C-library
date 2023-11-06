/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** description
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest), i = 0;

    while (i < nb && src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    } dest[len + i] = '\0';
    return dest;
}
