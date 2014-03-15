/*
 A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 
 Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define MAX 999
#define PALINDROME_DIGIT_SIZE 6

bool is_palindrome(uint32_t n)
{
    char palindrome[PALINDROME_DIGIT_SIZE + 1];
    uint8_t checks = 0;
    bool pass = true;
    
    snprintf(palindrome, sizeof(palindrome), "%d", n);
    
    for (checks = 0; pass && checks < (PALINDROME_DIGIT_SIZE / 2); checks++)
    {
        if (palindrome[checks] != palindrome[PALINDROME_DIGIT_SIZE - 1 - checks])
        {
            pass = false;
        }
    }
    
    return pass;
}

int main(int argc, const char * argv[])
{
    uint16_t first;
    uint16_t second;
    uint32_t largest_palindrome = 0;
    uint32_t candidate = 0;
    
    for (first = 1; first <= MAX; first++)
    {
        for (second = 1; second <= MAX; second++)
        {
            candidate = first * second;
            
            if (is_palindrome(candidate) && candidate > largest_palindrome)
            {
                largest_palindrome = candidate;
                printf("Found palindrome: %u\n", largest_palindrome);
            }
        }
    }
    
    return 0;
}

