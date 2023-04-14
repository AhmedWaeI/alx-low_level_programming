#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
	@@ -11,79 +11,35 @@
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int L1 = 0;

	unsigned int L2 = 0;

	unsigned int counter = 0;

	char *ptr;

	unsigned int i;

	unsigned int j;

	if(s1

	while(s1[L1])
	{
		L1++;
	}
	if (L1 == 0)
	{
		s1 = "";
		L = 1;
	}
	 while(s2[L2])
        {
                L2++;
        }
        if (L2 == 0)
        {
		s2 = "";
		L2 = 1;
        }
	if (n < L2)
	{
		ptr = malloc(sizeof(char) * (L1 + n) + 1);
	}
	else
	{
		ptr = malloc(sizeof(char) * (L1 + L2) + 1);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < L1; i++)
	{
		ptr[i] = s1[i];
	}

	if (n < L2)
	{
		for (j = i; j < L1 + n; j++)
		{
			ptr[j] = s2[counter];
			counter++;
		}
	}
	if (n >= L2)
        {
                for (j = i; j < L2 + L1; j++)
                {
                        ptr[j] = s2[counter];
			counter++;
                }
        }

	return (ptr);

	ptr[j] = '\0';
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
