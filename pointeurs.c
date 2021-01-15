#include <stdio.h>

/*
	Pointeur : variable contenant l'adresse d'une autre variable
	%p -> affiche une adresse de variable ou pointeur
	[VARIABLES]
	>	maVariable 		: valeur de la variable
		&maVariable 	: adresse de la variable

	[POINTEURS]
	>
		type *monPointeur = &maVarible && *monPointeur = NULL
		(déclaration et initialisation d'un poiteur) 
	>
		monPointeur 	: adresse de la variable pointée
		*monPointeur	: valeur de la variable pointée
		&monPointeur	: adresse du pointeur
*/
void inverser_nombres(int *pt_nb1, int *pt_nb2)
{
	int temporaire = 0;//B
	temporaire = *pt_nb2;
	*pt_nb2 = *pt_nb1;
	*pt_nb1 = temporaire;
}

int main(void)
{
	int nombreA = 15;
	int nombreB = 28;

	int *pointeurSurNombreA = &nombreA;
	int *pointeurSurNombreB = &nombreB;

	printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
	inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
	printf("APRES : A = %d et B = %d\n", nombreA, nombreB);
	return 0;
}