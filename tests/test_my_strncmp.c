/*
** EPITECH PROJECT, 2018
** test task06
** File description:
** test task06
*/

#include <criterion/criterion.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, return_correct_valu)
{
    char s1[] = "Hello";
    char s2[] = "Heblo";

    cr_assert_eq(my_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
}
