 #include <stdio.h>

/**
 * main - computes and prints the sum of all
 * Return: int.
 */

int main(void)
{
	int x = 0;
	int a = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			a += x;
		}
		x += 1;
	}
	printf("%d\n", a);
	return (0);
}
