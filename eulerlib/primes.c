#include <math.h>
#include <stdbool.h>
#include <stdint.h>

bool is_prime(uint64_t n)
{
    uint64_t to_check = ceil(sqrt(n));

	if (n == 2)
	{
		return true;
	}
        
        for (; to_check >= 2; to_check--)
        {
            if (n % to_check == 0)
            {
                return false;
            }
        }
        
        return true;
}

uint32_t next_prime(uint32_t after)
{
	if (after == 0)
	{
		after = 1;
	}

	while (true)
	{
		after++;
		if (is_prime(after))
		{
			return after;
		}
	}
}
