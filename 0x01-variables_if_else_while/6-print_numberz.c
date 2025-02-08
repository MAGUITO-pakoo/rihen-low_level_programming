#include <stdio.h>

/**
* main - Affiche tous les chiffres de 0 à 9 suivi d'une nouvelle ligne
* sans utiliser de variable de type char
* Return: 0 (Succès)
*/
int main(void)
{
 int num;

for (num = 48; num <= 57; num++)  /* '0' = 48, '9' = 57EN ASCII */
putchar(num);
						 
putchar('\n');  /* Affichage du retour à la ligne */
			
return (0);
}

