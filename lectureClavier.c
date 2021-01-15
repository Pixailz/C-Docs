#include <stdio.h>

int main(void)
{
	/*
		maVariable 	: contenu de la variable (exemple ageUtilisateur = 25)
		&maVariable : adresse ou est stockée la variable 
	*/
	
	int ageUtilisateur = 25;
	printf("Quelle age avez-vous ? \n-> ");
	/*
		Il faut mettre l'adresse de la variable (&maVariable)
		pour que le scanf fonctionne.
	*/
	scanf("%d", &ageUtilisateur);
	printf("Vous avez %d ans.\n", ageUtilisateur);
	return 0;
}