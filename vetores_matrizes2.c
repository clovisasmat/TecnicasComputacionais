/*Tecnicas computacionais 2022-1
  Exemplo -- vetores e matrizes 2
  Vetor a partir de uma lei de formaccao
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>


int main(){
    int i;
    int vet[10];


    for(i=0;i<10;i++){
        vet[i]=(i*3)+10;
        printf(" Vetor[%d] = %d\n",i,vet[i]);
    }

    printf("\nFinal\n");
    return 0;
}
