#include "100-prime_factor.h"
#include <math.h>

int find_largest_prime_factor(long n)
{
	    long largest_factor = 1;
	    long i;
	        for ( i = 2; i <= sqrt(n); i++)
			    {
				            while (n % i == 0)
						            {
								                largest_factor = i;
										            n /= i;
											            }
					        }
		    if (n > 1)
			            largest_factor = n;

		        return largest_factor;
}

