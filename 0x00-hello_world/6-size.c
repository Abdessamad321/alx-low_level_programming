#include <stdio.h>

/**
 * main - Prints the size of various types a based on
 * the computer it is compiled and run on..
 * Return: Always 0 (Success)
 */
int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizof(char));
	printf("Size of an int: %zu byte(s)\n", sizof(int));
	printf("Size of a long int: %zu byte(s)\n", sizof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizof(float));
	return (0);
}
