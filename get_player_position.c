/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** get_player_position
*/

#include "include/my_sokoban.h"

void get_player_pos_sndpart(SOKOBAN_T *BASE)
{
    for (BASE->q = 0; BASE->q != BASE->nb_cols; BASE->q++) {
        if (BASE->map[BASE->k][BASE->q] == 'P') {
            BASE->pos_x = BASE->k;
            BASE->pos_y = BASE->q;
        }
    }
}

void get_player_position(SOKOBAN_T *BASE)
{
    BASE->pos_x = 0;
    BASE->pos_y = 0;
    BASE->k = 0;
    BASE->q = 0;
    for (BASE->k; BASE->k != BASE->nb_rows; BASE->k++) {
        get_player_pos_sndpart(BASE);
    }
}
