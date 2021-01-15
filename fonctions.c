#include <stdio.h> 

int init_ball(int posX); //prototypes de la fonctions init_ball
int bonjour(void);

int main(void)
{
	/*
		Exemples de fonctions :
			- printf()
			- scanf()
	*/
	int balleX = 15;

	balleX = init_ball(balleX);
	printf("Avant la partie : %d\n", balleX);

	//une partie de jeu se fait

	balleX = init_ball(balleX);
	printf("Apres la partie : %d\n", balleX);

	int retourFonction;
	retourFonction = bonjour();
	printf("Retour : %d\n", retourFonction);
	return 0;
}

int init_ball(int posX)
{
	posX = 150;
	return posX;
}

int bonjour(void)
{
	printf("Bonjour :) !\n");
	return 120;
}