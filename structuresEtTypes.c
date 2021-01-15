#include <stdio.h>
/*
	(*monPointeur).unChamp = X;
	est egal a : 
	monPointeur->unChamp = X;
*/
/*
typedef enum Booleen{
	false,	//0
	true	//1
} Booleen;

int main (void){
	Boolen jeuLance = false;
	return 0;
}
*/
/*
union Nombre{
	int entier;
	float decimal;
}

int main(void){
	union Nombre nb1;
	nb1.entier = 3;
	nb1.decimal = 3.14;
	return 0;
}
*/
typedef struct Player{
	signed char username[256];
	int hp;
	int mp;
} Player;

void createPlayer(Player *p){
	strcpy((*p).username, "Pixailz");
	p->hp = 100;
	p->mp = 80;
}

int main(void){
	Player p1 = {"", 0, 0};
	createPlayer(&p1);
	printf("Nom du joueur : %s\n", p1.username);
	printf("PV : %d | PM : %d\n", p1.hp, p1.mp);
	return 0;
}