/*
** EPITECH PROJECT, 2018
** task03.5
** File description:
** task03.5
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, return_value_is_reversed)
{
    char str[6] = {0};

    strcpy(str, "World");
    cr_assert_str_eq(my_revstr(str), "dlroW");
}
