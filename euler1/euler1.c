/*
 *  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *   
 *    Find the sum of all the multiples of 3 or 5 below 1000.
 *    */

#include <stdio.h>
#include <stdint.h>

#define MAX 1000

int main(int argc, const char * argv[])
{
	uint16_t i = 3;
	uint16_t j = 5;
	uint32_t sum = 0;

	for (; i < MAX; i += 3)
	{
		sum += i;
	}

	for (; j < MAX; j += 5)
	{
		if (j % 3 != 0)
		{
			// Make sure we don't count items divisable with both 3 and 5 twice.
			sum += j;
		}
	}

	printf("Sum: %i\n", sum);
	return 0;
}
