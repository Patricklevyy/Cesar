/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** win_condition
*/

#include "include/my_sokoban.h"

int win_condtion_scndpart(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->a][BASE->b] == 'O') {
        return 0;
    }
}

int win_condtion(SOKOBAN_T *BASE)
{
    BASE->a = 0;
    BASE->b = 0;
    for (BASE->a; BASE->a != BASE->nb_rows; BASE->a++) {
        for (BASE->b = 0; BASE->b != BASE->nb_cols; BASE->b++) {
            win_condtion_scndpart(BASE);
        }
    }
    endwin();
    my_putstr("YOU WON!!");
    return (0);
}
