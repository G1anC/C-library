/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/


#ifndef PROJECT_H
    #define PROJECT_H

    // P R O J E C T  S T R U C T U R E S

        typedef struct project_structure {
            int data;
            char **arr;
            struct project_structure *next;
        } project_t;

    //  P R O J E C T  F U N C T I O N S

        int errorHandler(project_t *project);

#endif /* !PROJECT_H */
