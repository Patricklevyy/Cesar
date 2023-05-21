/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** readh
*/
#include "include/my_sokoban.h"

void readh(char **filepath, int x)
{
    char *buffer[1000];
    int fd = open("flagh.txt", O_RDONLY);

    read(fd, buffer, 1000);

    write(1, buffer, 1000);
    close(fd);
    return;
}
