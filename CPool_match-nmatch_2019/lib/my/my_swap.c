/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** tgbn
*/

void my_swap(int *a , int *b)
{
    int *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
