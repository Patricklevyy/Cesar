/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** gestion_error
*/

#include "include/my_sokoban.h"

void gestion_error_p_2(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->c][BASE->d] == 'P') {
        BASE->count_p += 1;
    }
}

int gestion_error_p(SOKOBAN_T *BASE)
{

    for (BASE->c; BASE->c != BASE->nb_rows; BASE->c++) {
        for (BASE->d = 0; BASE->d != BASE->nb_cols; BASE->d++) {
            gestion_error_p_2(BASE);
        }
    }
    if (BASE->count_p != 1) {
        exit(84);
    }
}

void gestion_error_x_o_2(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->e][BASE->f] == 'X') {
        BASE->count_X += 1;
    }
    if (BASE->map[BASE->e][BASE->f] == 'O') {
        BASE->count_O += 1;
    }
}

int gestion_error_x_o(SOKOBAN_T *BASE)
{
    for (BASE->e; BASE->e != BASE->nb_rows; BASE->e++) {
        for (BASE->f = 0; BASE->f != BASE->nb_cols; BASE->f++) {
            gestion_error_x_o_2(BASE);
        }
    }
    if (BASE->count_X != BASE->count_O) {
        exit(84);
    }
}
