/*
 * 10001st prime
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
*/

#include <eulerlib/primes.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, const char * argv[])
{
	uint32_t i = 0;
	uint32_t prime = 0;

	for (; i < 10001; i++)
	{
		prime = next_prime(prime);
	}

	printf("Result: %d\n", prime);
	return 0;
}
