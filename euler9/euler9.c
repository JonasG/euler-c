/*
 * Special Pythagorean triplet
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 * a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
*/

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Since a, b, c has to be natural numbers, they must be >0. Also, a+b+c =1000 means each of them can be at most 998.
#define MIN 1
#define MAX 998

int main(int argc, const char * argv[])
{
	uint16_t a = MIN;
	uint16_t b = MIN;
	uint16_t c = MIN;

	for (; a <= MAX; a++)
	{
		for (b = a + 1; b <= MAX; b++)
		{
			for (c = b + 1; c <= MAX; c++)
			{
				if (a + b + c == 1000 && pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					printf("Result %u\n", a * b * c);
					return 0;
				}
			}
		}
	}

	printf("Result: not found\n");
	return 1;
}
