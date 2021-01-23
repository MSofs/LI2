//
// Created by Utilizador on 06/03/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include ".//tabuleiros.h"
#define LINHAS 10
#define COLUNAS 10



void menu ()
{
    printf ("Opcao 1 - Abrir e ver ficheiro \n");
    printf ("Opcao 2 - Alterar e gravar conteudo do ficheiro \n");
    printf ("Opcao 5- Sair \n");
}

void abreFile (){
    FILE *fptr;

    if((fptr = fopen(".//tabuleiro.txt","r")) == NULL){
        printf("Erro!Ficheiro nao existente.");
        exit(1);
    }
    char linha[100];
    while(fgets(linha, 100, fptr)) { //essa função vai ler ficheiro
        printf("\n%s", linha);
    }
}







void alteraFile () {

    FILE *fptr;

    if((fptr = fopen(".//tabuleiro.txt","w")) == NULL){
        printf("Erro!Ficheiro nao existente.");
        exit(1);}


    char tabuleiro[LINHAS][COLUNAS];
    int linha, coluna;
    char elemento;


    printf(" Insira a linha e a coluna que pretende alterar: \n ");
    scanf("%d %d",&linha,&coluna);
    printf(" Insira o elemento para que vai substituir (X,O,.)\n ");
    elemento=getchar();

        linha--;
        coluna--;


        if  (linha<0 || coluna<0 ||linha>=dimensao[0] || coluna>=dimensao[1]){
            printf("\n Posicao Invalida \n");
            getchar();
            return;
        }

        if(elemento!='X' && elemento!='O' && elemento!='.'){
            printf("\n!Caracter Invalido!\n\n");
            getchar();
            return;
        }

        tabuleiro[linha][coluna]=elemento;
        fclose(fptr);

}











}
*/
