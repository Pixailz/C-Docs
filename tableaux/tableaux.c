#include <stdio.h>
/*
    [Déclaration tableaux]
    >    <type <nomTableau>[X]; // Déclare avec valeurs aléatoires

    [Initialisation]
    >   tableau [5] = {valeur 1, valeur 2, valeur 3, valeur 4, valeur5};
        tableau [5] = {0}; //Toutes les cases valent 0
        tableau [5] = {4}; //Première case à 4, LE RESTE A 0 !
    [Accès au tableau]
    >   tableau[X] : élément d'indice X (X+1ème élément du tableau)

        tableau         : adresse du tableau 
        *tableau        : premier element du tableau
        *(tableau + X)  : element d'indice X
    (NOTE)
        tableau[5] même chose que -> *(tableau + 5)
*/
/*
#define TAILLE_TAB 5

int *creerTableau(void);
void afficherTableau(int tab[], int taille);

int main(void){
    int i;
    int *tableau = creerTableau();
    afficherTableau(tableau, TAILLE_TAB);
    tableau[2] = -5;
    printf("\n\n");
    afficherTableau(tableau, TAILLE_TAB);
    return 0;
}

/*------------------------------------------------------------------------

int *creerTableau(void){
	static int tableauEntiers[5];
	int i;
	for(i = 0; i < 5; i++)
		tableauEntiers[i] = i * 3;
	return tableauEntiers;
}

/*------------------------------------------------------------------------

void afficherTableau (int tab[], int taille){
    int i;
    for(i=0 ; i<taille ; i++)
        printf("%d.", tab[i]);
}
*/
//TABLEAU DEUX DIMENSION
#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 2
int main (void){
	int damier [NOMBRE_LIGNES][NOMBRE_COLONNES] = {{1,2},{3,4},{5,6}};
	int i, j;
	for(i = 0; i < NOMBRE_LIGNES ; i++)
		for(j = 0; j < NOMBRE_COLONNES; j++)
			printf("Element indice [%d][%d] = %d\n", i, j, damier[i][j]);
	return 0;
}