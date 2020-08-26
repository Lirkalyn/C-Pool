/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    float result = 0.0;
    float squareRoot = nb / 2.0;

    if (nb <= 0)
        return (0);
    while ((result - squareRoot) != 0) {
            result = squareRoot;
        squareRoot = (result + (nb / result)) / 2.0;
    }
    if ((int)squareRoot == squareRoot) {
            return (squareRoot);
    }
    else {
        return (0);
    }
}
