/*
** EPITECH PROJECT, 2019
** Day_09
** File description:
** .h
*/

int convert_do_op(char *str);
void convert_do_op_2(char *str, int *dest, int *i, _Bool *isneg);
int sum(int num1, int num2);
int subtrat(int num1, int num2);
int mul(int num1, int num2);
int division(int num1, int num2);
int mod(int num1, int num2);
int (*p[5]) (int num1, int num2);
