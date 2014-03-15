/*
 * Summation of primes
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
*/

#include <eulerlib/primes.h>

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2000000

int main(int argc, const char * argv[])
{
	uint64_t sum = 0;
	uint32_t prime = 0;

	while (prime < MAX)
	{
		prime = next_prime(prime);

		if (prime < MAX)
		{
			sum += prime;
		}
	}

	printf("Result: %llu\n", sum);
	return 0;
}
