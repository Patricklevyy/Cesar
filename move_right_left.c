/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** move_right_left
*/

#include "include/my_sokoban.h"

void move_left_sndpart(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->pos_x][BASE->pos_y - 1] == 'X') {
        if (BASE->map[BASE->pos_x][BASE->pos_y - 2] == ' ' ||
        BASE->map[BASE->pos_x][BASE->pos_y - 2] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y - 2] = 'X';
            BASE->map[BASE->pos_x][BASE->pos_y] = ' ';
            BASE->map[BASE->pos_x][BASE->pos_y - 1] = 'P';
            BASE->pos_y--;
        }
    }
}

void move_left(SOKOBAN_T *BASE)
{
    if (BASE->key == KEY_LEFT) {
        if (BASE->map[BASE->pos_x][BASE->pos_y - 1] == ' ' ||
        BASE->map[BASE->pos_x][BASE->pos_y - 1] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y] = BASE->pos_before;
            BASE->pos_before = BASE->map[BASE->pos_x][BASE->pos_y - 1];
            BASE->map[BASE->pos_x][BASE->pos_y - 1] = 'P';
            BASE->pos_y--;
        }
        move_left_sndpart(BASE);
    }
}

void move_right_sndpart(SOKOBAN_T *BASE)
{
    if (BASE->map[BASE->pos_x][BASE->pos_y + 1] == 'X') {
        if (BASE->map[BASE->pos_x][BASE->pos_y + 2] == ' ' ||
        BASE->map[BASE->pos_x][BASE->pos_y + 2] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y + 2] = 'X';
            BASE->map[BASE->pos_x][BASE->pos_y] = ' ';
            BASE->map[BASE->pos_x][BASE->pos_y + 1] = 'P';
            BASE->pos_y++;
        }
    }
}

void move_right(SOKOBAN_T *BASE)
{
    if (BASE->key == KEY_RIGHT) {
        if (BASE->map[BASE->pos_x][BASE->pos_y + 1] == ' ' ||
        BASE->map[BASE->pos_x][BASE->pos_y + 1] == 'O') {
            BASE->map[BASE->pos_x][BASE->pos_y] = BASE->pos_before;
            BASE->pos_before = BASE->map[BASE->pos_x][BASE->pos_y + 1];
            BASE->map[BASE->pos_x][BASE->pos_y + 1] = 'P';
            BASE->pos_y++;
        }
        move_right_sndpart(BASE);
    }
}

void move_right_left(SOKOBAN_T *BASE)
{
    move_left(BASE);
    move_right(BASE);
}
