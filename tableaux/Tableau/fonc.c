#include <stdio.h>
#include "fonc.h"

//-------------------------------------------------------------------------
//
int sommeTableau(int tableau[], int tailleTableau){
    int i, sommeTemp = 0;
    for (i = 0; i < tailleTableau; i++){
        sommeTemp += tableau[i];
    }
    return sommeTemp;
}

//-------------------------------------------------------------------------
//
double moyenneTableau(int tableau[], int tailleTableau){
    int i;
    double somme = 0, moyenne = 0;
    for (i = 0; i < tailleTableau; i++){
        somme += tableau[i];
    }
    moyenne = somme / tailleTableau;
    return moyenne;
}

//-------------------------------------------------------------------------
//
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau){
    int i;
    for (i = 0; i < tailleTableau; i ++){
        tableauCopie[i] = tableauOriginal[i];
    }
}

//-------------------------------------------------------------------------
//
void maximumTableau(int tableau[], int tailleTableau, int valeurMax){
    int i;
    for (i = 0; i < tailleTableau; i++){
        if (tableau[i] > valeurMax)
            tableau[i] = 0;
    }
}

//-------------------------------------------------------------------------
//
void ordonnerTableau(int tableau[], int tailleTableau){
    int i, j, temp = 0;
    for (i = 0; i < tailleTableau; i++){
        for (j = 0; j < tailleTableau; j++){
            if(tableau[j] > tableau[j + 1]){
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
                temp = 0;
            }
        }
    }
}