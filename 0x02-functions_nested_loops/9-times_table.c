#include "main.h"

void times_table(void)
{
	 int row, col, result;
for (row = 0; row < 10; row++) 
		     {
for (col = 0; col < 10; col++)  
                     {
result = row * col;
if (col != 0)  
_putchar(',');
	     
if (result < 10)  
_putchar(' ');
_putchar('0' + result);
 }
_putchar('\n');
}
}
