/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** main
*/

#include "include/my_sokoban.h"

void display_ncurses(SOKOBAN_T *BASE)
{
    get_player_position(BASE);
    initscr();
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        for (int a = 0; a < BASE->nb_rows; a++) {
            mvprintw(a, 0, BASE->map[a]);
        }
        BASE->key = getch();
        move_right_left(BASE);
        move_up_down(BASE);
        win_condtion(BASE);
        refresh();
        if (BASE->key == 113)
            break;
    }
    for (int z = 0; z < BASE->nb_rows; z++) {
        free(BASE->map[z]);
    }
    endwin();
}

void decla_int(SOKOBAN_T *BASE)
{
    BASE->i = 0;
    BASE->p = 0;
    BASE->m = 0;
    BASE->pos_before = ' ';
    BASE->count_p = 0;
    BASE->c = 0;
    BASE->count_O = 0;
    BASE->count_X = 0;
    BASE->e = 0;
    BASE->f = 0;
    BASE->d = 0;
}

void read_map_scndpart(SOKOBAN_T *BASE)
{
    get_nb_cols(BASE);
    BASE->map[BASE->p] = malloc(sizeof(char) * (BASE->nb_cols + 1));
    for (BASE->i = 0; BASE->i != BASE->nb_cols; BASE->i++) {
        BASE->map[BASE->p][BASE->i] = BASE->buffer[BASE->m];
        BASE->m++;
    }
    BASE->map[BASE->p][BASE->i] = '\0';
    BASE->m++;
}

int read_map(char **filepath, SOKOBAN_T *BASE)
{
    struct stat pln;
    stat(filepath[1], &pln);
    BASE->buffer = malloc(sizeof(char) * pln.st_size);
    int fd = open(filepath[1], O_RDONLY);
    read(fd, BASE->buffer, pln.st_size);
    BASE->nb_rows = get_nb_lines(BASE);
    BASE->map = malloc(sizeof(char *) * (BASE->nb_rows));
    for (BASE->p; BASE->p != BASE->nb_rows; BASE->p++) {
        read_map_scndpart(BASE);
    }
    gestion_error_p(BASE);
    gestion_error_x_o(BASE);
    display_ncurses(BASE);
    free(BASE->buffer);
    close(fd);
}

int main(int ac, char **av)
{
    SOKOBAN_T *BASE = malloc(sizeof(SOKOBAN_T));
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            readh(av, ac);
            return 0;
        } else {
            decla_int(BASE);
            read_map(av, BASE);
        }
    } else {
        return (84);
    }
    free(BASE->map);
    free(BASE);
}
