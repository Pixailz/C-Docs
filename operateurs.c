#include <stdio.h>

int main(void)
{
	/*
		+ (addition)
		- (soustraction)
		* (multiplication)
		/ (division)-> 5/2 = 2
		% (modulo)	-> 5%2 = 1
	*/
	int calcule = 6 + 4;
	printf("%d\n", calcule);
	//OU
	printf("%d\n", 6 + 4);
	int nb1 = 6;
	int nb2 = 2;
	printf("%d\n", nb1 + nb2);
	/*
		<variable> = <variable> + X -> <variable> += X
		<variable> = <variable> - X -> <variable> -= X
		<variable> = <variable> * X -> <variable> *= X
		<variable> = <variable> / X -> <variable> /= X
	*/
	int niveauxJoueurs = -1;
	printf("Choisir le niveaux de depart : ");
	scanf("%d", &niveauxJoueurs);
	printf("Niveau de depart : %d\n", niveauxJoueurs);
	niveauxJoueurs += 1;
	printf("Niveau actuel : %d\n", niveauxJoueurs);
	/*
		Incrementation
		A++		++A 
		A--		--A
	*/
	int nbIncrementer = 14;
	printf("le nombre vaux : %d\n", nbIncrementer);
	nbIncrementer++;
	printf("le nombre incrementer vaux : %d\n", nbIncrementer);
	nbIncrementer--;
	printf("le nombre decrementer vaux : %d\n", nbIncrementer);
	return 0;
}