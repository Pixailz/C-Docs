#include <stdio.h>
#include <stdlib.h>

/*
    fopen(<fichier>, <mode_ouverture>): r  (lecture seul, doit exister)
                                        w  (ecriture seule)
                                        a  (ajout fin fichier)
                                        r+ (lecture/ecriture, doit exister)
                                        w+ (lecture/ecriture, supprime contenu)
                                        a+ (ajout lecture/ecriture, fin de fichier)
    fclose(<fichier>)   : fermer un fichier ouvert
    feof(<fichier>)     : tester la fin d'un fichier
    
    [LECTURE]
    fgetc(<fichier>)                            : lire un caractère
    fgets(<chaine>, <taille_chaine>, <fichier>) : lit une ligne
    fscanf(<fichier>, <format>, ...)            : lit du texte formaté

    [ECRITURE]
    fputc(<caractères>, <fichier>)              : écrit un caractère
    fputs(<chaine>, <fichier>)                  : écrit une ligne de texte
    fprintf(<fichier>, <format>, ...)           : écrit du texte formaté

    [POSITIONNEMENT]
    ftell(<fichier>)                            : retourne position curseur dans fichier
    fseek(<fichier>, <deplacement>, <origine>)  : deplace curseur
        -> <origine> : SEEK_SET (début fichier)
                       SEEK_CUR (position courante)
                       SEEK_END (fin fichier)
    
    rewind(<fichier>)   : réinitilialise la position du curseur

    [DIVERS]
    rename(<ancien_nom>, <nouceau_nom>)
    remove(<fichier>)
*/

int main(void){
    remove("data.save");
    return 0;
}