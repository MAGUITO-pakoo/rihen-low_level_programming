#include "main.h"
#include <stdio.h>

/*
 * main - Teste la fonction _isdigit
 *   
 * Return: Always 0.
 */
int main(void)
{
	    char c;

	        c = '0';
		    printf("%c: %d\n", c, _isdigit(c));

		        c = 'a';
			    printf("%c: %d\n", c, _isdigit(c));

			        c = '5';
				    printf("%c: %d\n", c, _isdigit(c));

				        c = 'Z';
					    printf("%c: %d\n", c, _isdigit(c));

					        return (0);
}

