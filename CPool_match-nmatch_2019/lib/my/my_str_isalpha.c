/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_str_isalpha
*/

#include <stddef.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            return (0);
        i++;
    }
    return (1);
}
