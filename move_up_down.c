/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** move_p
*/

#include "include/my_sokoban.h"

void move_up_sndpart(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->pos_x - 1][BASE->pos_y] == 'X') {
        if (BASE->map[BASE->pos_x - 2][BASE->pos_y] == ' ' ||
        BASE->map[BASE->pos_x - 2][BASE->pos_y] == 'O') {
            BASE->map[BASE->pos_x - 2][BASE->pos_y] = 'X';
            BASE->map[BASE->pos_x][BASE->pos_y] = ' ';
            BASE->map[BASE->pos_x - 1][BASE->pos_y] = 'P';
            BASE->pos_x--;
        }
    }
}

void move_up(SOKOBAN_T *BASE)
{
    if (BASE->key == KEY_UP) {
        if (BASE->map[BASE->pos_x - 1][BASE->pos_y] == ' ' ||
        BASE->map[BASE->pos_x - 1][BASE->pos_y] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y] = BASE->pos_before;
            BASE->pos_before = BASE->map[BASE->pos_x - 1][BASE->pos_y];
            BASE->map[BASE->pos_x - 1][BASE->pos_y] = 'P';
            BASE->pos_x--;
        }
        move_up_sndpart(BASE);
    }
}

void move_down_sndpart(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->pos_x + 1][BASE->pos_y] == 'X') {
        if (BASE->map[BASE->pos_x + 2][BASE->pos_y] == ' ' ||
        BASE->map[BASE->pos_x + 2][BASE->pos_y] == 'O') {
            BASE->map[BASE->pos_x + 2][BASE->pos_y] = 'X';
            BASE->map[BASE->pos_x][BASE->pos_y] = ' ';
            BASE->map[BASE->pos_x + 1][BASE->pos_y] = 'P';
            BASE->pos_x++;
        }
    }
}

void move_down(SOKOBAN_T *BASE)
{
    if (BASE->key == KEY_DOWN) {
        if (BASE->map[BASE->pos_x + 1][BASE->pos_y] == ' ' ||
        BASE->map[BASE->pos_x + 1][BASE->pos_y] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y] = BASE->pos_before;
            BASE->pos_before = BASE->map[BASE->pos_x + 1][BASE->pos_y];
            BASE->map[BASE->pos_x + 1][BASE->pos_y] = 'P';
            BASE->pos_x++;
        }
        move_down_sndpart(BASE);
    }
}

void move_up_down(SOKOBAN_T *BASE)
{
    move_up(BASE);
    move_down(BASE);
}
