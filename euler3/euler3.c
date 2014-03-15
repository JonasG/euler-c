/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600 851 475 143 ?
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

bool is_divisible_with_small_ints(uint64_t n)
{
    return (n % 2 == 0)
        || (n % 3 == 0)
        || (n % 4 == 0)
        || (n % 6 == 0)
        || (n % 8 == 0)
        || (n % 9 == 0)
        || (n % 10 == 0);
}

bool is_prime(uint64_t n)
{
    if (is_divisible_with_small_ints(n))
    {
        return false;
    }
    else
    {
        uint64_t to_check = ceil(sqrt(n));
        
        for (; to_check >= 2; to_check--)
        {
            if (n % to_check == 0)
            {
                return false;
            }
        }
        
        return true;
    }
}

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

