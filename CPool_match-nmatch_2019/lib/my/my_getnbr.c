/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** test
*/

void searchnumber(int len, char const **str, _Bool *search, int *found)
{
    int i;

    for (i = 0; i < len; i++) {
        if (*(*str + i) >= '0' && *(*str + i) <= '9' && *search == 0) {
            *found = i;
            *search = 1;
        }
    }
}

_Bool isoverflow(int len, int num[len], _Bool isneg)
{
    int i;
    int numofnum = 0;
    int addall = 0;

    for (i = 0; i < len; i++)
        if (num[i] != 10) {
            numofnum++;
            addall += num[i];
        }
    if (numofnum > 10 || (addall > 46 && isneg == 0)
        || (addall > 47 && isneg == 1)) {
        return (1);
    }
    else if (numofnum < 10 || addall <= 46)
        return (0);
}

void my_get(int len, int found, char const *str, int num[len])
{
    int i;
    int whereintru;
    _Bool findintru;

    for (i = found; i < len; i++)
        if ((str[i] < '0' && findintru == 0)
            || (str[i] > '9' && findintru == 0)) {
            whereintru = i;
            findintru = 1;
        }
    if (findintru == 0)
        for (i = found; i < len; i++)
            num[i] = (str[i] - '0');
    else if (findintru == 1)
        for (i = found; i < whereintru; i++)
            num[i] = (str[i] - '0');
}

int my_get_again(int len, int found,  char const *str, int num[len])
{
    int minus_nbr = 0;
    _Bool isneg = 0;
    int affnum = 0;

    for (int i = 0; i < found; i++)
        if (str[i] == '-')
            minus_nbr++;
    if (minus_nbr % 2 != 0)
        isneg = 1;
    if (isoverflow (len, num, isneg) == 1)
        return (0);
    for (int i = 0; i < len; i++)
        if (num[i] < 10)
            affnum = (affnum*10 + num[i]);
    if (minus_nbr % 2 != 0)
        affnum *= (-1);
    return (affnum);
}

int my_getnbr(char const *str)
{
    int len;
    for (len = 0; str[len] != '\0'; len++);
    _Bool search = 0;
    int found;
    int affnum;
    int num[len];

    for (int i = 0; i < len; i++)
        num[i] = 10;
    searchnumber (len, &str, &search, &found);
    if (search == 0)
        return (0);
    my_get(len, found, str, num);
    affnum = my_get_again(len, found, str, num);
    return (affnum);
}
