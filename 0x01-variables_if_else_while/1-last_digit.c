#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of number stored in
 * variable n
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lstdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdg = n % 10;

	if (lstdg > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lstdg);
	}
	else if (lstdg == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lstdg);
	}
	else if (lstdg < 6 && lstdg != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdg);
	}

	return (0);
}
