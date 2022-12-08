#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a chart: %i byte(s)\n", sizeof(chart));
	printf("size of an int: %i bytes(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int)); 
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
