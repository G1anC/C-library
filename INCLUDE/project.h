/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/


#ifndef PROJECT_H
    #define PROJECT_H

    // P R O J E C T  S T R U C T U R E S

    typedef struct p_s {
        char **map;
        int **matrix;
        int x[3];
    } p_t;

    //  P R O J E C T  F U N C T I O N S

        int error_handler(p_t *p);


#endif /* !PROJECT_H */
