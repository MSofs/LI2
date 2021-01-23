#include <stdio.h>
#include <stdlib.h>
#include ".//tabuleiros.h"


void menu ()
{
    printf ("Opcao 1 - Abrir e ver ficheiro \n");
    printf ("Opcao 2 - Alterar e gravar conteudo do ficheiro \n");
    printf ("Opcao 5- Sair \n");
}

void abreFile (){
    int num;
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

int main() {
    int opcao = 0;
    while (6) {
        menu();
        printf("Insira a opcao: \n");
        scanf("%d", &opcao);
        if (opcao == 3) break;
        switch (opcao) {
            case 1:
                abreFile();
                break;
     //       case 2:
     //         alteraFile();
     //         break;
            case 3:
                printf("A sair do programa...");
                break;

            default:
                printf("A opcao selecionada nao existe. Selecione uma opcao a baixo. \n");
                break;
        }
        return 0;
    }
}
