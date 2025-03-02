#include <stdio.h>
#include "100-prime_factor.h"

int main(void)
{
	    long number = 612852475143;
	        int largest_prime_factor = find_largest_prime_factor(number);
		    printf("%d\n", largest_prime_factor);
		        return 0;
}

