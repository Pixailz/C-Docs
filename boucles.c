#include <stdio.h>

int main(void)
{
	int i = 1;
	//While test la conditions a l'entrée
	while(i <= 20)
	{
		printf("Alerte, les zombies nous envahissent !%d\n", i);
		i++;
	}
	//tandis que do while affiche au moins une fois avant de verifier
	i = 6;
	do
	{
		printf("Aya !\n");
		i++;
	}
	while(i < 5);
	//for version condenser 
	for (i=0; i < 5; i++)
	{
		printf("Aya !!\n");
	} 
	return 0;
}