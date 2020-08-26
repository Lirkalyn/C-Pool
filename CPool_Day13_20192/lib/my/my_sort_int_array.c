/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** yhn
*/

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;
    int tmp;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}
