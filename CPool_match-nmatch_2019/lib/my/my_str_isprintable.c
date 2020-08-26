/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_str_isprintable
*/

#include <stddef.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] < ' ' || str[i] > '~')
            return (0);
        i++;
    }
    return (1);
}
