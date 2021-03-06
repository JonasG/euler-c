/*
 * Highly divisible triangular number
 * The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
 *
 * 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 * Let us list the factors of the first seven triangle numbers:
 *
 *    1: 1
 *    3: 1,3
 *    6: 1,2,3,6
 *    10: 1,2,5,10
 *    15: 1,3,5,15
 *    21: 1,3,7,21
 *    28: 1,2,4,7,14,28
 *
 *    We can see that 28 is the first triangle number to have over five divisors.
 *
 *    What is the value of the first triangle number to have over five hundred divisors?
*/

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

uint32_t count_divisors(uint32_t n)
{
	uint32_t divisors = 0;
	uint32_t i = 1;

	for (; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisors++;
		}
	}

	return divisors;
}

int main(int argc, const char * argv[])
{
	uint32_t n = 1;
	uint32_t sum = 0;
	uint32_t divisors = 0;
	uint32_t largest_divisor_count = 0;

	for (; n <= 0xffffffff; n++)
	{
		sum += n;
		divisors = count_divisors(sum);
		
		if (divisors > largest_divisor_count)
		{
			largest_divisor_count = divisors;
			printf("Result: sum -- %u, divisors -- %u\n", sum, divisors);
		}

		if (divisors > 500)
		{
			break;
		}
	}


	return 0;
}
