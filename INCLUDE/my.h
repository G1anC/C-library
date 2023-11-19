/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    // I N C L U D E S

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    #include <stdarg.h>
    #include <string.h>
    #include <fcntl.h>

    #include <dirent.h>
    #include <sys/types.h>
    #include <sys/stat.h>

    #include "project.h"

    // L I B R A R Y

        // printf

    int my_printf(char const *str, ...);
    void tableau_flags_fonctions(char character, va_list list);
    void flag_d(va_list list);
    void flag_i(va_list list);
    void flag_s(va_list list);
    void flag_c(va_list list);
    void flag_pourcent(va_list list);
    void flag_a(va_list list);
    void flag_A(va_list list);
    void flag_p(va_list list);
    void flag_n(va_list list);
    void flag_minus(va_list list);
    void flag_F(va_list list);
    void flag_g(va_list list);
    void flag_G(va_list list);
    void flag_u(va_list list);
    void flag_o(va_list list);
    void flag_x(va_list list);
    void flag_X(va_list list);
    void flag_f(va_list list);
    void flag_b(va_list list);
    void flag_x_maj(va_list list);
    double my_put_float(double f);
    void argx(int arg);
    int my_put_nbr(int);
    int my_putstr(int fd, char *);
    int my_putchar(char c);

        // important functions

    // returns 0 if the 2nd parameter exists in the first
    // returns -1 if not
    int is_existing(char *, char);

    // returns the length of parameter
    int my_strlen(char *);

    // returns the int value of the string given as parameter
    int my_getnbr(char *);

    // returns the first string, copy of the 2nd
    char *my_strcpy(char *, char const *);

    // returns the first string, copy of the 2nd (of size n)
    char *my_strncpy(char *, char *, int);

    // compares 2 strings
    // returns 0 if same
    int my_strcmp(char const *, char const *);

    // compares 2 strings based on size n,
    // returns 0 if same
    int my_strncmp(char const *, char const *, int);

    // returns a string glued with another
    char *my_strcat(char *, char const *);

    // returns a string glued with another (of size n)
    char *my_strncat(char *, char const *, int);

    // print an array with a \n in between strings
    void my_print_array(char **);

    // separates string into an array :
    void myStrToWordArray(char *str, char **arr);

    // array length calculator
    int arrlen(char **);

    // str to word array based on character that seperates the words
    char **split_string(char *, char);

    // str to word array boosted with LSD
    char **array_tok(char *, char *);

    // exit with error message
    void exitError(char *errMess);

    // return an allocated array from a string
    char **mallocWork(char *str);

    // returns a dupliacte of the string given as parameter
    char *my_strdup(char const *str);

    // L I B R A R Y  D E F I N E S

    #define NUMBER (str[i] >= '0' && str[i] <= '9')
    #define ALPHA (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z' || *str >= '1' && *str <= '9')
    #define BAD_START (i == 0 && str[i] != ALPHA)
    #define NOALPHA_SUITE (str[i - 1] != ALPHA && str[i] != ALPHA)
    #define NEW_LINE (str[i] != ALPHA && str[i - 1] == ALPHA)
    #define DIGITS (*str >= '0' && *str <= '9')
    #define SIGN (*str == '+' && *str == '-')

    //  P R O J E C T  F U N C T I O N S

#endif /* !MY_H_ */
