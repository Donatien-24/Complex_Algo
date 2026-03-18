#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verification_1(int tab[], int nbVal, int x){
    int cpt;

    for(cpt = 1; cpt <= nbVal; cpt++){
        if(tab[cpt] == x){
            return 1;
        }
    }
    return 0;
}

int verification_2(int tab[], int nbVal, int x){

    int cpt, reponse;

    for(cpt = 1; cpt <= nbVal; cpt++){
        if(tab[cpt] == x){
            reponse = 1;
        }
        else{
            reponse = 0;
        }
    }
    return reponse;
}


int main()
{

    setlocale(LC_CTYPE, "");

    int tab[] = {10,8,9,7,4};
    const int nbVal = sizeof(tab)/ sizeof(tab[0]);
    int resultat, resultat_1;
    resultat = verification_1(tab,nbVal,8);
    resultat_1 = verification_2(tab,nbVal,8);

    printf("\nRésultat = %d", resultat);
    printf("\nRésultat = %d", resultat_1);
    return 0;
}
