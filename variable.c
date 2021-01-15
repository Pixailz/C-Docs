#include <stdio.h>

int main(void)
{
	int age = 21; //declaration variable de type (int)
	float prix = 178.25; //declaration variable de type (float)
	register int nombre = 5; //accessible dans le registre
	volatile int autreNombre = 10; //accessible uniquement dans la ram
	const float PI  = 3.14; //declaration d'un constante (en MAJ)
	/*
		%d : nombre entier (int)
		%f : nombre flottant (float)
		%c : caractère (char)
		%s : chaîne de caractères (texte)
	*/
	printf("Le prix est de %.2f euros.\n", prix);
	/*
		ici le %.2f siginifie affiche deux nombre
		apres la virgule du nombre flottant
	*/
	printf("Mon age est de %d\n", age);
	/*
		pour convertir le type d'une variable a une autre
	*/
	int prixInt = (int)prix;
	printf("Apres castage de la variable, le prix est maintenant de : %d\n", prixInt);
	return 0;
}