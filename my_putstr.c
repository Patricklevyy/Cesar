/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** task02
*/
#include "include/my_sokoban.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
