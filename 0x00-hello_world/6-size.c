#include<stdio.h>
/**
 * main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

100-intel

#!/bin/bash
gcc -S -masm=intel $CFILE

101-quote.c

#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\n" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
