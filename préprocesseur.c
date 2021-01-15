#include <stdio.h>
#define afficher printf //Remplace affichier par printf dans le code (avant la compilation)
#define MAJEUR(age, nom) if (age >= 18) \
					printf("Vous etes majeur %s\n", nom);
/*
	Constantes prédéfinies du langage C :
		__FILE__ (nom du fichier)
		__LINE__ (ligne du fichier)
		__DATE__ (date de compilation)
		__TIME__ (hueure de compilation)
	[CONDITION]
	>	#if
		#elif
		#endif
		#ifdef
		#ifndef
		
		//EX
		#define WINDOWS

		#ifdef WINDOWS
			//Code source pour Windows
		#endif

		#ifdef LINUX
			//Code source pour Linux
		#endif

		#ifdef MAC
			//Code source pour Mac 
		#endif

*/
int main(void)
{
	MAJEUR(21, "Bruno")
	afficher("Nom du fichier : %s\n", __FILE__);
	return 0;
}