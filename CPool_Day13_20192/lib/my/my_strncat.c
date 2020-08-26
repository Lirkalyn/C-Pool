/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int len;
    int i;

    for (len = 0; dest[len] != '\0'; len++);
    for (i = 0; i < nb; i++) {
        dest[len] = src[i];
        len++;
    }
    len++;
    dest[len] = '\0';
    return dest;
}
