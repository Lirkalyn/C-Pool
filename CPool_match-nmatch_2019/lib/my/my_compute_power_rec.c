/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    long int test = 1;
    int i;

    for (i = 0; i < p; i++)
    {
        test *= nb;
        if (test > 2147483647 || test < -2147483648)
            return (0);
    }
    if (p > 0) {
        return (nb * my_compute_power_rec(nb, (p - 1)));
    }
    else if (p < 0)
        return (0);
    else {
        return (1);
    }
}
