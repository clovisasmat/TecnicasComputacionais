/*Tecnicas computacionais 2022-1
  Exemplo -- ponteiros 1
  funccao1, funccao2, funccao3, funccao4
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

//variaveis globais
int opcao=1;

prototipos de funccao
//funccoes matematicas
float funcao_matematica1(float x, float y, float z);

void funcao_matematica2(float x, float y, float z);

float funcao_matematica3(float x, float y, float z);

float funcao_matematica4(float x, float y, float z);

void escolha();

int main(){
    //declaraccao de variaveis
    int i,j,k,n,m;
    int soma;
//declaraccao de vetores
    int vet[10];
    int a[3];
    int b[3];
    int c[3];
    int resultado[3];
//declaraccao de matriz
    int matriz[3][3];

    //declaraccao de ponteiro de vetor
    int *vetor_A;
    int *vetor_B;
    int *vetor_C;
    //declaraccao de ponteiro de matriz
    int **matriz_A;

    //atribuiccao de valor a variaveis
    m=3;
    n=10;

    //alocaccao dinamica de memoria
    vetor_A=malloc(sizeof(int)*m);
    vetor_B=calloc(m,sizeof(int));
    vetor_C=malloc(sizeof(int)*m*m);

    printf("vetor_A \t vetor_b");
    for(i=0;i<m;i++){
        vetor_A[i]=(i*4)-16;
        vetor_B[i]=(i*4)+16;
        printf("%d\t%d\n",vetor_A[i],vetor_B[i]);
    }

    //alocaccao dinamica de memoria
    matriz_A=malloc(sizeof(int *)*m);

    for(j=0;j<m;j++){
        matriz_A[j]=malloc(sizeof(int)*m);
    }

    printf("\n");

//matriz A e vetor C
    printf("matriz_A");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            k=(i*m)+j;
            matriz_A[i][j]=(i+1)*(j+1);
            vetor_C[k]=(i+1)*(j+1);
            printf("%d\t",matriz_A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("vetor_C");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            k=(i*m)+j;
            printf("%d\t",vetor_C[k]);
        }
        printf("\n");
    }

    printf("\n");

    //impressao do vetor C sem variavel auxiliar
    printf("vetor_C sem variavel auxiliar");
    for(k=0;k<(m*m);k++){
        printf("%d\t",vetor_C[k]);
    }

    printf("\n");

//componentes de vet por formula matematica
    for(i=0;i<n;i++){
        vet[i]=(i*3)+n;
        printf("Vetor[%d]=%d\n",i,vet[i]);
    }

//componentes do vetor a com entrada pelo usuario
    printf("Digite as componentes do vetor a:\n");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

//componentes do vetor b com entrada pelo usuario
    printf("Digite as componentes do vetor b:\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

//calculo do produto escalar dos vetores a e b
    soma=0;

    for(i=0;i<m;i++){
        soma=soma+(a[i]*b[i]);
    }

    printf("O produto escalar eh:%d\n",soma);

    printf("\n");

//construccao de matriz por formula matematica
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            matriz[i][j]=(i+1)*(j+1);
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

//construccao do vetor c por formula matematica
    for(i=0;i<m;i++){
        c[i]=(i+1)*10;
        printf("%d\n",c[i]);
    }

    printf("\n");

//multiplicaccao da matriz pelor vetor c
    for(i=0;i<m;i++){
        resultado[i]=0;
        for(j=0;j<m;j++){
            resultado[i]+=(matriz[i][j]*c[j]);
        }
        printf("%d\n",resultado[i]);
    }

    printf("\nFinal\n");
    return 0;

    for(j=0;j<m;j++){
        free(matriz_A[j]);
    }

//liberaccao de memoria
    free(matriz_A);
    free(vetor_A);
    free(vetor_B);
    free(vetor_C);
}


float funcao_matematica1 (float x, float y, float z){
    float w;

    w=x+y+z;

    opcao=2;

    printf("Opcao=%d\n",opcao);

    if((x>y)&&(z>4.0))
        return w*2;
    else
        return w;
}

void funcao_matematica2 (float x, float y, float z){
    float w;

    w=x+y+z;

    opcao=3;

    printf("Opcao=%d\n",opcao);

    if((x>y)&&(z>4.0))
        printf("Caso 1: %lf\n", w*2.0);
    else
        printf("Caso 2: %lf\n", w);
}

float funcao_matematica3(float x, float y, float z){
    return x+y+z;
}

float funcao_matematica4(float x, float y, float z){
  return x*y*z;
}
