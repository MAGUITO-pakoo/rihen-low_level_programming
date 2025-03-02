#include <stdio.h>




int main(void)
{
long int first_term = 1, second_term = 2, next_term;
int count;

printf("%ld, %ld", first_term, second_term);

for (count = 3; count <= 50; count++)
{
next_term = first_term + second_term;
printf(", %ld", next_term);
first_term = second_term;
second_term = next_term;
}

printf("\n");

return (0);
}
