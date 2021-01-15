#include <stdio.h>
#include "fonc.h"
#define TAILLE_TABLEAU 4
#define VALEUR_MAX 20

int main(void){
    int i;
    int tableau[4] = {15, 81, 22, 13};
    int tableauCopie[4] = {0};
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    sommeTableau(tableau, TAILLE_TABLEAU);
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    moyenneTableau(tableau, TAILLE_TABLEAU);
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    copie(tableau, tableauCopie, TAILLE_TABLEAU);
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    maximumTableau(tableau, TAILLE_TABLEAU, VALEUR_MAX);
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    ordonnerTableau(tableau, TAILLE_TABLEAU);
    for (i = 0; i < 4; i ++){
        printf("[%d]\n", tableau[i]);
    }
    printf("\n");
    return 0;
}