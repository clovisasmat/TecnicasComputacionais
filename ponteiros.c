/*Tecnicas computacionais 2022-1
  Exemplo -- ponteiros
  Vetores e matrizes por alocaccao dinamica de memoria
  O vetor C guarda os elementos da matriz A
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

int main(){
    int i,j,k,n,m;
    int soma;
    int resultado[3];
//declaraccao de ponteiros
    int *vetor_A;
    int *vetor_B;
    int *vetor_C;
//declaraccao de ponteiro de matriz
    int **matriz_A;

    m = 3;
    n = 3;

//alocaccao dinamica de memoria
    vetor_A=malloc(sizeof(int)*m);
    vetor_C=malloc(sizeof(int)*m*n);

//alocaccao dinamica e inicializaccao com valor zero
    vetor_B=calloc(m,sizeof(int));

//construccao dos vetores vetor_A e vetor_B
    for(i=0;i<m;i++){
        vetor_A[i]=(i*4)-16;
        vetor_B[i]=(i*4)+16;
        printf("%d\t%d\n",vetor_A[i],vetor_B[i]);
    }

//alocaccao de memoria da matriz_A
    matriz_A=malloc(sizeof(int *)*n);

    for(j=0;j<n;j++){
        matriz_A[j]=malloc(sizeof(int)*m);
    }

    printf("\n");

//construccao da matriz_A e do vetor_C
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            k=(i*m)+j;
            matriz_A[i][j]=(i+1)*(j+1);
            vetor_C[k]=(i+1)*(j+1);
            printf("%d\t",matriz_A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

//imprime o vetor_C
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            k=(i*m)+j;
            printf("%d\n",vetor_C[k]);
        }
    }

    printf("\n");

    for(k=0;k<(m*n);k++){
        printf("%d\t",vetor_C[k]);
    }

    printf("\nFinal\n");
    return 0;

//liberaccao da memoria
    for(j=0;j<n;j++){
        free(matriz_A[j]);
    }

    free(matriz_A);
    free(vetor_A);
    free(vetor_B);
    free(vetor_C);
}
