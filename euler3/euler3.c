/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600 851 475 143 ?
*/

#include <eulerlib/primes.h>

#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    uint64_t target = 600851475143;
    // uint64_t target = 13195;
    uint64_t n = 2;
    uint64_t reminder = 0;
    
    printf("Starting...\n");
    
    for (n = 2; n < target; n++)
    {
        if (n % 10000 == 0)
        {
            printf(".");
        }
        
        if (target % n == 0 && is_prime(n))
        {
            target = target / n;
            printf("\nFound %u, new target: %u\n", n, target);
            // break;
        }
    }
    
    return 0;
}

