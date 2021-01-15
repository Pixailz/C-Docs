#include <stdio.h>
#include "player.h" 

void bonjour (void)
{
	printf("Bonjour :) !\n");
}

int augmenteNiveau(void)
{
	static int niveau = 0; 
	/*
		ici static sert a se que la variable niveau 
		ne sois pas detruites
	*/
	niveau += 2;
	return niveau;
}
/*
	le mot clef static devant une fonction 
		ex : static int augmenteNiveau(void)
	signifie que la fonctions ne peux etre appeller
	que dans ce fichier
*/