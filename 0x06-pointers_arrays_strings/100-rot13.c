#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to destination
 */

char *rot13(char *s)
{
	int c = 0, a;
	char alphabet[] = "'a' - 'z' && 'A' - 'Z'";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + c) == alphabet[a])
			{
				*(s + c) == rot13[a];
				break;
			}
		}
		c++;
	}
	return (s);
}
