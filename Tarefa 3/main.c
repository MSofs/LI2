#include <stdio.h>
#include <ctype.h>
#include "MS.h"

#define N 107

int main() {
    //{A,B,C,D,E,F,G,H,I,,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z}
   int i, contador=0;
   char frase[N], histo[LINHASH][COLUNASH];

    matrizIncio(histo);


   printf("Insira a frase aqui:");
   fgets( frase,107,stdin);

    for(i=0;frase[i]!='\0';i++){
        frase[i]=(char)toupper(frase[i]);
        if (frase[i]<'A' || frase[i]>'Z') continue;

        adicionar(histo,frase[i]);
    }

    desenha(histo);

}

