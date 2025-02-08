#include <stdlib.h>  /* Pour rand() et srand()*/
#include <time.h>    /* Pour time()*/
#include <stdio.h>   /* Pour printf()*/
	
/**
* main - Détermine si un nombre aléatoire est positif, nul ou négatif
* Return: 0 (Succès)
*/
 int main(void)
{
int n;
		
srand(time(0));  /* Initialise le générateur de nombres aléatoires*/
n = rand() - (RAND_MAX / 2);  /* Génère un nombre aléatoire positif ou négatif*/
		   
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
		 
return (0);
}
