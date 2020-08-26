/*
** EPITECH PROJECT, 2019
** Piscine_C_J09
** File description:
** convert_do_op
*/

void convert_do_op_2(char *str, int *dest, int *i, int *isneg_out)
{
    if (str[*i] >= '0' && str[*i] <= '9') {
        *dest *= 10;
        *dest += (str[*i] - '0');
    }
    if (str[*i] == '-') {
        if (str[*i + 1] >= '0' && str[*i + 1] <= '9') {
            *isneg_out = 1;
        }
    }
    else if (str[*i] < '0' || str[*i] > '9') {
        if (*isneg_out == 1) {
            *dest *= (-1);
            *isneg_out = 2;
            }
    }
    *i += 1;
}

int convert_do_op(char *str)
{
    int i = 0;
    int dest = 0;
    int isneg_out = 0;

    while (str[i] != '\0' && isneg_out != 2) {
        if ((str[i] < '0' || str[i] > '9') && (str[i] != '-' || str[i] != '+'))
            return (dest);
        convert_do_op_2(str, &dest, &i, &isneg_out);
        }
    return (dest);
}
