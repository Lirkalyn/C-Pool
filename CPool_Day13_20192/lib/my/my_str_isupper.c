/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_str_isupper
*/

#include <stddef.h>

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}
