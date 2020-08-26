/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strupcase.c
*/

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i] != '0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    return (str);
}
