/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** get_nb
*/
#include "include/my_sokoban.h"

int get_nb_lines(SOKOBAN_T *BASE)
{
    int s = 0;
    BASE->nb_rows = 0;
    for (s; BASE->buffer[s] != '\0'; s++) {
        if (BASE->buffer[s] == '\n') {
            BASE->nb_rows++;
        }
    }
    return BASE->nb_rows;
}

void get_nb_cols(SOKOBAN_T *BASE)
{
    int z = BASE->m;
    BASE->nb_cols = 0;
    for (z; BASE->buffer[z] != '\n'; z++) {
        BASE->nb_cols++;
    }
}
