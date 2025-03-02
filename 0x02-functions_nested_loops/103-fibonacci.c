#include <stdio.h>





int main(void)
{
	    long int first_term = 1, second_term = 2, next_term;
	    long int sum = 2;
while (1)
    {
            next_term = first_term + second_term;
if (next_term > 4000000)
        {
	            break;
	            }
if (next_term % 2 == 0)
	        {
			            sum += next_term;
				            }
first_term = second_term;
        second_term = next_term;
	    }
printf("%ld\n", sum);
return (0);
}
