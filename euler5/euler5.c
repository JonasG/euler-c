/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define MIN 1
#define MAX 20

bool is_divisible(uint32_t n, uint8_t min, uint8_t max)
{
	uint8_t i = 0;

	for (i = min; i <= max; i++)
	{
		if (n % i != 0)
		{
			return false;
		}
	}

	return true;
}

int main(int argc, const char * argv[])
{
	uint32_t i = 0;

	for (i = 1; i < 0xffffffff; i++)
	{
		if (is_divisible(i, MIN, MAX))
		{
			printf("Result: %u\n", i);
			return 0;
		}
	}

	return 1; // No result found
}
