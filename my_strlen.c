/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int p = 0;
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        p += 1;
    }
    return (p);
}
