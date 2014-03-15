/*
 * Sum square difference
 * The sum of the squares of the first ten natural numbers is,
 *
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define MIN_NATURAL 1
#define MAX_NATURAL 100

uint32_t sum_squares(uint8_t from, uint8_t to)
{
	uint32_t sum = 0;

	for (; from <= to; from++)
	{
		sum += pow(from, 2);
	}

	return sum;
}

uint32_t square_sum(uint8_t from, uint8_t to)
{
	uint32_t sum = 0;
	
	for (; from <= to; from++)
	{
		sum += from;
	}

	return pow(sum, 2);
}

int main(int argc, const char * argv[])
{
	uint32_t sum_of_squares = sum_squares(MIN_NATURAL, MAX_NATURAL);
	uint32_t square_of_sums = square_sum(MIN_NATURAL, MAX_NATURAL);

	printf("Result: %d\n", square_of_sums - sum_of_squares);
	/* printf("Result sum of squares: %d\n", sum_of_squares); */
	/* printf("Result sqare of sum: %d\n", square_of_sums); */
	return 0;
}
