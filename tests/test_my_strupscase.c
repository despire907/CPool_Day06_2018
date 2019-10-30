/*
** EPITECH PROJECT, 2018
** test task07
** File description:
** test task07
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strupcase(char *str);

Test(my_strupcase, up_case)
{
    char str[] = "#&abcdefghijklmnopqrsTuvwxyz%_";

    cr_assert_str_eq(my_strupcase(str), "#&ABCDEFGHIJKLMNOPQRSTUVWXYZ%_");
}

Test(my_strupcase, up_case2)
{
    char str[] = "";

    cr_assert_str_eq(my_strupcase(str), "");
}
