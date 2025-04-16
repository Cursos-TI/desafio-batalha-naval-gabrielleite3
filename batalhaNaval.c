#include <stdio.h>

int main() {
    int matriz[10][10];//declarei/criei a matriz.

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matriz[i][j] = 0; //atribui o valor zero a todos os 100 espaços da matriz.
        }
    }
//_______________________________________//
    for (int j = 1; j < 4; j++){
        matriz[8][j] = 3;//colocando o segundo navio na linha 8, colunas 1, 2 e 3 com valor 3.
    }

    for (int i = 6; i < 9; i++){
            matriz[i][9] = 3; //colocando o primeiro navio na coluna 9, linhas 6,7 e 8 com valor 3.
        }
//________________________________________//
        printf("  ");

    for (char linhacabecario = 'A'; linhacabecario <= 'J'; linhacabecario++){
            printf(" %c ", linhacabecario);//imprimindo o cabeçario na horizontal (LETRAS)
        }
    
        printf("\n");
//______________________________________//
    for (int i = 0; i < 10; i++){
            printf("%2d", i + 1); //imprime o cabecario na vertical (numeros)
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", matriz[i][j]);//Imprime  o valor da matriz linha por linha.
        }
        printf("\n");

        }
        

        return 0;

    }
    









    

