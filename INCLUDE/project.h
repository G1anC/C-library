/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/


#ifndef MY_H_
    #define MY_H_

    // P R O J E C T  S T R U C T U R E S

    typedef struct project_structure {
        int data;
        char **array;
        struct project_structure *next;
    } project_t;

#endif /* !MY_H_ */
