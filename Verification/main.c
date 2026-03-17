#include <stdio.h>
#include <stdlib.h>

int verification(int tab[], int nbVal, int x)
{
    int i;
    for(i=1; i<=nbVal; i++){
        if(tab[i]==x){
            return 1;
        }else{
            return 0;
        }
    }
}
int main()
{
   int tab[]= {10,8,9,7,4};
   const int nbVal= sizeof(tab)/sizeof(tab[0]);
   int resultat;
   resultat=verification(tab, nbVal, 8);
   printf("\nResultat = %d",resultat);
}
