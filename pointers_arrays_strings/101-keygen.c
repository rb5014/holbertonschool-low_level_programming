#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - Entry point
 * generates random valid passwords for the program 101-crackme
 *
 *
 *
 * Return : result int
 */

int main(void)
{
	srand(time(0));
	printf("%d\n", rand());
	return (rand());
}
