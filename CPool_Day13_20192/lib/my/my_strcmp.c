/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return ((s1[i] - s2[i]));
    return (0);
}
