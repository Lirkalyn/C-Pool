/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_showstr
*/

#include <stddef.h>

void my_putchar(char c);

int check_error15(char const *str)
{
    if (str == NULL)
        return (1);
    return (0);
}

void convert2(char const str)
{
    int num = str;
    char res[3] = "\\";
    int i = 1;
    while (num > 0) {
        res[3 - i] = (num % 16);
        num /= 16;
        i++;
    }
    i = 0;
    while (i < 3) {
        if (res[i] >= 0 && res[i] <= 9)
            my_putchar((res[i] + 48));
        else if (res[i] < 92)
            my_putchar((res[i] + 87));
        else
            my_putchar(res[i]);
        i++;
    }
}

int my_showstr(char const *str)
{
    int i = 0;

    if (check_error15(str))
        return (0);
    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~')
            my_putchar(str[i]);
        else
            convert2(str[i]);
        i++;
    }
    return (0);
}
