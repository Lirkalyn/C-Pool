/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
            str[i] -= 32;
        else if ((str[i] >= 'a' && str[i] <= 'z')
                && ((str[(i - 1)] >= 32 && str[(i - 1)] <= 47)
                || (str[(i - 1)] >= 58 && str[(i - 1)] <= 64)
                || (str[(i - 1)] >= 91 && str[(i - 1)] <= 96)
                || str[(i - 1)] >= 123 && str[(i - 1)] <= 126)) {
            str[i] -= 32;
        }
    }
    str[(i + 1)] = '.';
    str[(i + 2)] = '\0';
    return (str);
}
