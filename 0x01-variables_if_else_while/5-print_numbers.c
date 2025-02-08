#include <stdio.h>

/**
* main - Affiche tous les chiffres de 0 à 9 suivi d'une nouvelle ligne
* Return: 0 (Succès)
*/
int main(void)
{
int num;

for (num = 0; num < 10; num++)  /* Boucle de 0 à 9 */
printf("%d", num);
					
printf("\n");  /* Affichage du retour à la ligne */
					
return (0);
}

