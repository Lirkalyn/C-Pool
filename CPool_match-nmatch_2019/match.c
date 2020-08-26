/*
** EPITECH PROJECT, 2019
** match
** File description:
** match
*/

#include <stddef.h>

int str1_longer(char const *s1, char const *s2)
{
    int i;
    int j = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        if (s2[j] == '*' && s2[(j + 1)] == '*')
            for (; s2[j] != '*'; j++);
        if (s2[(j + 1)] == s1[i])
            j++;
        else if (s2[j] != s1[i] && s2[j] != '*')
            return 0;
        j++;
    }
    return 1;
}

int str2_longer(char const *s1, char const *s2)
{
    int i;
    int j = 0;

    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '*' && s2[(i + 1)] == '*')
            for (; s2[i] != '*'; i++);
        if (s2[(i + 1)] == s1[j])
            i++;
        else if (s2[i] != s1[j] && s2[i] != '*')
            return 0;
        j++;
    }
    return 1;
}

int match(char const *s1, char const *s2)
{
    int str1;
    int str2;

    if (s1 == NULL || s2 == NULL)
        return 0;
    for (str1 = 0; s1[str1] != '\0'; str1++);
    for (str2 = 0; s2[str2] != '\0'; str2++);
    if (str1 >= str2) {
        if (str1_longer(s1, s2))
            return 1;
        else
            return 0;
    }
    else {
        if (str2_longer(s1, s2))
            return 1;
        else
            return 0;
    }
}
