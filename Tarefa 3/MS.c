//
// Created by Utilizador on 28/02/2019.
//
#include <stdio.h>
#include <ctype.h>
#include "MS.h"



void adicionar(char histo[][COLUNASH],char m) {
    int sm;
    int colunas = (int)m - 65;
    for (sm= LINHASH-2; sm>=0 && histo[sm][colunas]!=' ' ;--sm );
    histo[sm][colunas] = '*';

}


void matrizIncio (char histo[][COLUNASH]){
    int mah,nah;
    for(mah=0; mah<= LINHASH -1;mah++){
        for (nah=0; nah<= COLUNASH-1; nah++){
            if(mah==LINHASH-1){
                histo[mah][nah]= (char) (65+nah);
                continue;
            }
            histo[mah][nah]=' ';
        }

    }

}


void desenha (char histo[][COLUNASH]){
    int i,j;
    for(i=0; i<LINHASH; i++){

        for(j=0; j<COLUNASH; j++){
            printf(" %c", histo[i][j]);

        }
        printf("\n");
    }
}




