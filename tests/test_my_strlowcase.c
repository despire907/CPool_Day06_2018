/*
** EPITECH PROJECT, 2018
** test task08
** File description:
** test task08
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, low_case)
{
    char str[] = "%#ABCDEFGHIJKLMnOPQRSTUVWXYZ_";

    cr_assert_str_eq(my_strlowcase(str), "%#abcdefghijklmnopqrstuvwxyz_");
}

Test(my_strlowcase, low_case2)
{
    char str[] = "";

    cr_assert_str_eq(my_strlowcase(str), "");
}
