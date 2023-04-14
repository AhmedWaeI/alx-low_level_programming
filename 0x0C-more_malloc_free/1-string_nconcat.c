#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int L1 = 0;

	int L2 = 0;

	while(s1[L1])
	{
		L1++;
	}
	if (L1 == 0)
	{
		s1 = "";
	}
	 while(s2[L2])
        {
                L2++;
        }
        if (L2 == 0)
        {
		s1 = "";
        }

	char *ptr;

	int i;

	int j;

	ptr = malloc((sizeof(char) * (L1 + L2)) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < L1; i++)
	{
		ptr[i] = s1[i];
	}

	int counter = 0;

	if (n < L2)
	{
		for (j = i; j < L1 + n; j++)
		{
			ptr[j] = s2[counter];
		}
	}
	if (n >= L2)
        {
                for (j = i; j < L2 + L1; j++)
                {
                        ptr[j] = s2[counter];
                }
        }

	return (ptr);
}
