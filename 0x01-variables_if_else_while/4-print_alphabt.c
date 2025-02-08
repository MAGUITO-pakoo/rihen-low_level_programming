#include <stdio.h>

/**
* main - Affiche l'alphabet en minuscules sauf 'q' et 'e', suivi d'une nouvelle ligne
* Return: 0 (Succès)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)  /* Boucle de 'a' à 'z' */
{
if (letter != 'q' && letter != 'e')  /* Exclut 'q' et 'e' */
putchar(letter);
}
putchar('\n');  /* Affiche une nouvelle ligne */
							     
return (0);
}

