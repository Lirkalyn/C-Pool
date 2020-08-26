/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int len;
    int i;

    for (len = 0; dest[len] != '\0'; len++);
    for (i = 0; src[i] != '\0'; i++) {
        dest[len] = src[i];
        len++;
    }
    len++;
    dest[len] = '\0';
    return (dest);
}
