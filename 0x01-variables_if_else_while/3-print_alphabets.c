#include <stdio.h>
/**
 * main - Entry point
 * Description: 'upper and lowercase alphabets'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	n++;
	}
	while (m <= 90)
	m++;
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
