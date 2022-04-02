/*Tecnicas computacionais 2022-1
  Exemplo -- Vetores e matrizes 1
  Produto escalar de dois vetores
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

int main(){
    int i;

    int a[3];
    int b[3];

    int soma;

    printf(" Produto escalar de vetores com 3 componentes \n");

    printf("\n Digite as componentes do vetor a: \n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }

    printf("\n Digite as componentes do vetor b: \n");
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }

    soma=0;

    for(i=0;i<3;i++){
        soma=soma+(a[i]*b[i]);
    }

    printf("\n O produto escalar eh: %d\n",soma);


    printf("\nFinal\n");
    return 0;
}
