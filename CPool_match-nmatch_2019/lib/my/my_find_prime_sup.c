/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_find_prime_sup(int nb)
{
    long int i;
    long int rsl = nb;

    if (nb < 2)
        return (2);
    for (i = 2; i < ((rsl / 2) + 1); i++)
    {
        if (rsl % i == 0) {
            rsl++;
            i = 2;
        }
    }
    return (rsl);
}
