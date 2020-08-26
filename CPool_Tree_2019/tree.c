/*
** EPITECH PROJECT, 2019
** Fir Tree
** File description:
** 
*/

void treangle_2(int *stage, int *star, int *reach_triangle, int *space)
{
    if (*reach_triangle >= 3) {
        *star -= 6;
        *space += 1;
        if (*reach_triangle != 3) {
            *star -= (2 * ((*reach_triangle - 3) / 2));
            *space += (1 * ((*reach_triangle - 3) / 2));
        }
    } else
        *star -= 4;
    *space += 2;
    *stage += 1;
}

void treangle(int size, int nb, int stage, int star)
{
    int i;
    int j;
    int base = 7;
    int reach_triangle = 0;
    int space;

    space = ((((base - 1) / 2) * size) + (size - (nb)));
    while (reach_triangle != size) {
        for (i = 0; i < stage; i++) {
            for (j = 0; j < space; j++)
                my_putchar(' ');
            space -= 1;
            for (j = 0; j < star; j++)
                my_putchar('*');
            my_putchar('\n');
            star += 2;
        }
        reach_triangle++;
        treangle_2(&stage, &star, &reach_triangle, &space);
    }
}

int calc_bigtree(int size, int rsl, int progresse, int step)
{
    if (progresse == size)
        return (size - rsl);
    else {
        rsl += step;
        if (progresse % 2 != 0)
            step++;
        progresse++;
    }
    calc_bigtree(size, rsl, progresse, step);
}

int calc_trunk(int size, int rsl, int progresse, int step)
{
    if (progresse == size)
        return (rsl);
    else {
        if (progresse % 2 != 0)
            rsl += step;
        progresse++;
    }
    calc_trunk(size, rsl, progresse, step);
}

int trunk(int size, int nb)
{
    int i;
    int j;
    int space;
    int base = 7;
    int trunk;

    space = ((((base - 1) / 2) * size) + (size - (nb)));
    if (size > 1 && size < 6)
        space = ((space - (size / 2) + 1));
    else
        space = (space - (size / 2));
    trunk = calc_trunk(size, 1, 1, 2);
    for (i = 0; i < size; i++) {
        for (j = 0; j < space; j++)
            my_putchar(' ');
        for (j = 0; j < trunk; j++)
            my_putchar('|');
        my_putchar('\n');
    }
}

void tree(int size)
{
    if (size > 0) {
        if (size == 1 || size == 5) {
            treangle(size, 1, 4, 1);
            if(size == 1)
                trunk(size, 1);
            else if(size == 5)
                trunk(size, 2);
        } else if (size > 1 && size < 5) {
            treangle(size, 2, 4, 1);
            trunk(size, 3);
        } else {
            treangle(size, calc_bigtree(size, 6, 6, 3), 4, 1);
            trunk(size, calc_bigtree(size, 6, 6, 3));
        }
    } else {
        write(2, "invalide size\n", 14);
    }
}
