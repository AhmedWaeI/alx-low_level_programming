#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL && s2 == NULL)
        return NULL;

    size_t len1 = (s1 == NULL) ? 0 : strlen(s1);
    size_t len2 = (s2 == NULL) ? 0 : strlen(s2);

    char *new_str = malloc(len1 + len2 + 1);

    if (new_str == NULL)
        return NULL;

    size_t i = 0;

    if (s1 != NULL)
    {
        for (size_t j = 0; j < len1; j++)
        {
            new_str[i++] = s1[j];
        }
    }

    if (s2 != NULL)
    {
        for (size_t j = 0; j < len2; j++)
        {
            new_str[i++] = s2[j];
        }
    }

    new_str[i] = '\0';

    return new_str;
}

