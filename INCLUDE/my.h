/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#ifndef MY_H
    #define MY_H

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
        #include <stdbool.h>
        #include "project.h"


    // L I B R A R Y  F U N C T I O N S

        // print an array with a \n in between strings
        void my_print_array(char **);

        // separates string into an array :
        void to_arr(char *str, char **arr);

        // array length calculator
        int arrlen(char **);

        // printf an array
        void put_array(char **array);

        // str to word array based on character that seperates the words
        char **split_string(char *, char*);

        // str to word array boosted with LSD
        char **array_tok(char *, char *);

        // return an allocated array from a string
        char **malloc_work(char *str);

        char **stat_file(char *fileName);


    // L I B R A R Y  D E F I N E S

        #define NUMBER (str[i] >= '0' && str[i] <= '9')
        #define ALPHA (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z' || *str >= '1' && *str <= '9')
        #define BAD_START (i == 0 && str[i] != ALPHA)
        #define NOALPHA_SUITE (str[i - 1] != ALPHA && str[i] != ALPHA)
        #define NEW_LINE (str[i] != ALPHA && str[i - 1] == ALPHA)
        #define DIGITS (*str >= '0' && *str <= '9')
        #define SIGN (*str == '+' && *str == '-')
        #define IS_ALPHA(c)  (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        #define PTR sizeof(char *)
        #define errno (*_Errno())

#endif /* !MY_H_ */
