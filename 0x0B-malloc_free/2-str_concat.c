#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *new_str;
    size_t len1 = 0, len2 = 0, i = 0;

    if (s1)
        len1 = strlen(s1);
    if (s2)
        len2 = strlen(s2);

    new_str = malloc(len1 + len2 + 1);
    if (!new_str)
        return (NULL);

    if (s1)
        memcpy(new_str, s1, len1);
    if (s2)
        memcpy(new_str + len1, s2, len2);

    new_str[len1 + len2] = '\0';

    return (new_str);
}
