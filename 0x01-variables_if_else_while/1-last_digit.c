#include <stdlib.h>  /* Pour rand() et srand() */
#include <time.h>    /* Pour time() */
#include <stdio.h>   /* Pour printf() */
		    
/**
* main - Affiche le dernier chiffre d'un nombre aléatoire et son interprétation
* Return: 0 (Succès)
   
*/
int main(void)
{
int n, last_digit;

srand(time(0));  /* Initialise le générateur de nombres aléatoires */
n = rand() - RAND_MAX / 2;  /* Génère un nombre aléatoire positif ou négatif */
last_digit = n % 10;  /* Extrait le dernier chiffre */
		   
printf("Last digit of %d is %d", n, last_digit);
		  
if (last_digit > 5)
printf(" and is greater than 5\n");
else if (last_digit == 0)
printf(" and is 0\n");
else
printf(" and is less than 6 and not 0\n");
		
return (0);
}
