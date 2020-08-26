/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** 
*/

int display2(int i, int j, int k, int l)
{
    int a;
    int b;

    my_putchar(i);
    my_putchar(j);
    my_putchar(' ');
    my_putchar(k);
    my_putchar(l);
    a = ((i - '0') * 10) + ((j - '0'));
    b = ((k - '0') * 10) + ((l - '0'));
    if (a == 98 && b == 99)
        return(0);
    else
    {
        my_putchar(',');
        my_putchar(' ');
    }
}

void compare2(int i, int j, int k, int l)
{
    int a;
    int b;
    
    a = ((i - '0') * 10) + ((j - '0'));
    b = ((k - '0') * 10) + ((l - '0'));
    if (a != b && a < 99)
        if (b > a)
            display2(i, j, k, l);
}

void my_print_comb2(void)
{
    int i;
    int j;
    int k;
    int l;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {
                for (l = '0'; l <= '9'; l++)
                {
                    compare2(i, j, k, l);
                }
            }
        }
    }
}
