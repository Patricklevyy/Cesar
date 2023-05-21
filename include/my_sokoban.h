/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-gnanmienlie-patrick-levy.n-da
** File description:
** my_sokoban
*/

#ifndef MY_SOKOBAN_H_
    #define MY_SOKOBAN_H_

    #include <fcntl.h>
    #include <ncurses.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <unistd.h>

    typedef struct SOKOBAN {
        int i;
        int p;
        int m;
        int nb_rows;
        int nb_cols;
        char **map;
        int key;
        char *buffer;
        int pos_x;
        int pos_y;
        char pos_before;
        int k;
        int q;
        int count;
        int count_cols;
        int a;
        int b;
        char *lines;
        char *cols;
        int count_p;
        int c;
        int d;
        int count_O;
        int count_X;
        int e;
        int f;

    } SOKOBAN_T;

    int read_map(char **filepath, SOKOBAN_T *BASE);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_strlen( char const * str);
    void display_ncurses(SOKOBAN_T *BASE);
    void decla_int(SOKOBAN_T *BASE);
    void move_up_down(SOKOBAN_T *BASE);
    void move_right_left(SOKOBAN_T *BASE);
    void readh(char **filepath, int x);
    void get_player_position(SOKOBAN_T *BASE);
    void move_up(SOKOBAN_T *BASE);
    void move_down(SOKOBAN_T *BASE);
    void move_left(SOKOBAN_T *BASE);
    void move_right(SOKOBAN_T *BASE);
    void move_right_sndpart(SOKOBAN_T *BASE);
    void move_left_sndpart(SOKOBAN_T *BASE);
    void move_up_sndpart(SOKOBAN_T *BASE);
    void move_down_sndpart(SOKOBAN_T *BASE);
    void get_player_pos_sndpart(SOKOBAN_T *BASE);
    int win_condtion(SOKOBAN_T *BASE);
    int my_putstr (char const *str);
    int gestion_error_p(SOKOBAN_T *BASE);
    int gestion_error_x_o(SOKOBAN_T *BASE);
    int get_nb_lines(SOKOBAN_T *BASE);
    void get_nb_cols(SOKOBAN_T *BASE);
    void read_map_scndpart(SOKOBAN_T *BASE);
    int check_end_game_defeat(char **map, SOKOBAN_T *BASE);

#endif /* !MY_SOKOBAN_H_ */
