/*
** EPITECH PROJECT, 2018
** test_my_strstr
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);
int my_find(char *str, char const *to_find, int bobo);

Test(my_strstr, return_valu_of_number)
{
    char to_find[] = "Hello";
    char str[] = "abcdHelloefgh";

    cr_assert_str_eq(my_strstr(str, to_find), &str[4]);
}
