/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strstr
*/

#include <stddef.h>

int check_error3(char const *src)
{
    if (src == NULL)
        return (1);
    return (0);
}

int my_strlen3(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strstr(char *str , char const *to_find)
{
    int i;
    int j = 0;
    int len;
    int test = 0;

    if (check_error3(str) || check_error3(to_find))
        return (NULL);
    len  = my_strlen3(to_find);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[j]) {
            test++;
            j++;
        } else if (test == len) {
            return (str + (i - len));
        } else {
            test = 0;
            j = 0;
        }
    }
    return (NULL);
}
