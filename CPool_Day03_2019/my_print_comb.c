/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** 
*/

void display(int i, int j, int k)
{
    my_putchar(i);
    my_putchar(j);
    my_putchar(k);
    if (i < '7')
    {
        my_putchar(',');
        my_putchar(' ');
    }
}

int compare(int i, int j, int k)
{
    if (i != j && i != k && j != k)
        return (1);
    return (0);
}

int chek_min(int i, int j, int k)
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    a = ((i - '0') * 100) + ((j - '0') *10) + (k - '0');
    b = ((j - '0') * 100) + ((k - '0') *10) + (i - '0');
    c = ((k - '0') * 100) + ((i - '0') *10) + (j - '0');
    d = ((i - '0') * 100) + ((k - '0') *10) + (j - '0');
    e = ((j - '0') * 100) + ((i - '0') *10) + (k - '0');
    f = ((k - '0') * 100) + ((j - '0') *10) + (i - '0');
    if (a < b && a < c && a < d && a < e && a < f)
    {
        display(i, j, k);
    }
    return (0);
}

int my_print_comb(void)
{
    int i;
    int j;
    int k;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {
                if (compare(i, j, k))
                    chek_min(i, j, k);
            }
        }
    }
    return (0);
}
