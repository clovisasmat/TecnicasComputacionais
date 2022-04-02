/*Tecnicas computacionais 2022-1
  Exemplo -- vetores e matrizes 3
  Multiplicaccao de matriz por vetor
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>


int main(){
    int i,j,m,n;
    int matriz[3][3];
    int c[3];
    int resultado[3];


    m=3;
    n=3;

//matriz
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matriz[i][j]=(i+1)*(j+1);
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

//vetor
    for(i=0;i<n;i++){
        c[i]=(i+1)*10;
        printf("%d\n",c[i]);
    }

    printf("\n");

//multiplicaccao da matriz pelo vetor
    for(i=0;i<m;i++){
        resultado[i]=0;
        for(j=0;j<n;j++){
            resultado[i]+=(matriz[i][j]*c[j]);
        }
        printf("%d\n",resultado[i]);
    }


    printf("\nFinal\n");
    return 0;
}
