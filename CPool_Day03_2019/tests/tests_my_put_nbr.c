/*
** EPITECH PROJECT, 2019
** blabla
** File description:
** 
*/

int my_put_nbr2(int nb)
{
    int a;
    int b;
    _Bool over = 0;

    if (nb < 0)
    {
        my_putchar('-');
        if (nb == -2147483648)
        {
            nb += 1;
            over = 1;
        }
        nb = (nb * (-1));
    }
    if (nb >= 10)
    {
        my_put_nbr2(nb / 10);
        a = (nb % 10 + '0');
        if (over == 1 && a == '7')
        {
            a++;
            over = 0;
        }
        my_putchar(a);
    } else {
        b = (nb + 48);
        my_putchar(b);
    }
    return 0;
}

int main(void)
{
    my_put_nbr2(2147483647);
    my_putchar('\n');
    my_put_nbr2(-2147483648);
    my_putchar('\n');
    my_put_nbr2(-101);
    my_putchar('\n');
    my_put_nbr2(505);
    my_putchar('\n');
    my_put_nbr2(0);
    my_putchar('\n');
}
