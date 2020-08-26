/*
** EPITECH PROJECT, 2019
** Day_07
** File description:
** .h
*/

#ifndef _MY_H_
#define _MY_H_

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
void searchnumber(int len, char const **str, _Bool *search, int *found);
_Bool isoverflow(int len, int num[len], _Bool isneg);
void my_get(int len, int found, char const *str, int num[len]);
int my_get_again(int len, int found,  char const *str, int num[len]);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_put_nbr_neg(int *nb, _Bool *over);
int my_putstr(char const *str);
char *my_revstr(char *str);
int check_error2(char *src);
int my_strlen2(char const *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int check_error15(char const *str);
void convert2(char const str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest , char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int my_strlen50(char const *str);
char *my_strstr(char *str , char const *to_find);
int check_error3(char const *src);
int my_strlen3(char const *str);
char *my_strupcase(char *str);
void my_swap(int *a , int *b);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);
void put_in_place(int *size, char **dest, int *progress, char const *str);
int count_memory(int i, char const *str, int size);
int calcsize(char const *str);

#endif
