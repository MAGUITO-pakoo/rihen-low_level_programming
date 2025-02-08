#include <stdio.h>

/**
* main - Affiche l'alphabet en minuscules puis en majuscules suivi d'une nouvelle ligne
* Return: 0 (Succès)
*/
int main(void)
{
	    char letter;

	        for (letter = 'a'; letter <= 'z'; letter++)  /* Affichage des lettres en minuscules */
putchar(letter);
							     
			
                for (letter = 'A'; letter <= 'Z'; letter++)  /* Affichage des lettres en majuscules */
putchar(letter);
							   
putchar('\n');  /* Affichage du retour à la ligne */
							     
return (0);}

