/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strncpy
*/

#include <unistd.h>

int my_strlen50(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len;

    if (n < 0) {
        write(2, "invalide size\n", 14);
    } else {
        len = my_strlen50(src);
        while (i < n) {
            dest[i] = src[i];
            i++;
            if (i == len) {
                dest[i] = '\0';
                return (dest);
            }
        }
        dest[i] = '\0';
        return (dest);
    }
}
