#include <stdio.h>
#include <string.h>

/*
	[Fonction des chaînes]
	>	strcpy() 	: copie une chaîne dans une autre
		strlen() 	: longueur d'une chaîne (sans caractères de fin de chaîne '\0')
		strcmp() 	: comparer deux chaînes (lexicographiquement)
		strcat() 	: concatèner deux chaînes (fusionner)
		strstr() 	: chercher une chaîne dans une autre
		strchr() 	: chercher 1ère occurence du caractère
		sprintf()	: écrire dans une chaîne
*/

int main (void){
	char texte[256];
	sprintf(texte, "Jason", 5);
	printf("%s\n", texte);
	sprintf(texte, "Bruno", 5);
	printf("%s\n", texte);
	sprintf(texte, "merde", 5);
	printf("%s\n", texte);
	return 0;
}