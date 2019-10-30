/*
** EPITECH PROJECT, 2018
** test task05
** File description:
** test task05
*/

#include <criterion/criterion.h>
#include <string.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, return_valu_of_difference)
{
    char s1[] = "Hello";
    char s2[] = "Hello";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}
