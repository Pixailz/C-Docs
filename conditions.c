#include <stdio.h>

int main(void)
{
	/*
		== 	: égal à
		!= 	: différent de
		<	: plus petit que
		>	: plus grand que
		<=	: plus petit ou égal à
		>=	: plus grand ou égal à

		&& 	: ET
		||	: OU
		!	: NOT
	*/
	int age = 205;
	if (age < 1)
	{
		printf("Tu n'est pas ne.\n");
	}
	else if((age >= 1 && age <= 100) || age == 205) 
	{
		printf("Tu a un age compris entre 1 et 100 ans.\n");
	}
	else
	{
		printf("Waah, tu a plus de 100 ans !!!\n");
	}
	/*
		conditions if avec bool 
		int = 1 -> true
		int = 0 -> false
	*/
	int jeuDemarre = 0;
	if (jeuDemarre)
	{
		printf("Bienvenue sur le jeux.\n");
	}
	else
	{
		printf("le jeu n'a pas ete lance...\n");
	}
	age = 15;
	switch(age)
	{	
		case 0:
			printf("Tu as 0 an.\n");
			break;

		case 15:
			printf("Age vaut 15.\n");
			break;

		default:
			printf("Tu n'a ni 0 an, ni 15 ans.\n");
			break;
	}
	age = 15;
	int ilAQuinzeAns = -1;
	ilAQuinzeAns = (age ==15 ) ? 1 : 0;
	printf("Il a quinze ans = %d\n", ilAQuinzeAns);
	return 0;
}