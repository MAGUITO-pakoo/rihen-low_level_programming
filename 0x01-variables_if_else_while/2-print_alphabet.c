#include <stdio.h>

/**
* main - Affiche l'alphabet en minuscules suivi d'une nouvelle ligne
* Return: 0 (Succès)
*/
int main(void)
{
	    char letter;

	        for (letter = 'a'; letter <= 'z'; letter++)  /* Parcours les lettres de 'a' à 'z' */
putchar(letter);
							     
putchar('\n');  /* Affiche un retour à la ligne */
							     
return (0);
}

