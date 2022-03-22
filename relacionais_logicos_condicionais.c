/*Tecnicas computacionais 2022-1
  Operadores logicos e relacionais, e condicionais
  08/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

//variavel global
int opcao=1;

//prototipos de funcoes
float funcao_matematica1 (float x, float y, float z);

void funcao_matematica2 (float x, float y, float z);

int main(){
//declaracao e inicializacao de variaveis
    int i;
    int j;
    int k;
    int a=10;
    int b=11;
    int c;
    int A;
    int B;

    float u;

    float valor1, valor2, valor3;

    i=20;
    j=20;


    i/=3;
    j%=3;

    printf(" i = %d\n j = %d\n",i,j);

    //condicional e operadores relacionais
    if(i>j)
        k=i;
    else
        k=j;

    printf(" O maior foi %d\n",k);

    if(b<=a)
        c=a*b;
    else
        c=a-b;

    printf(" O resultado foi %d\n",c);

    if(i!=j)
        c=2*c;

    printf(" O resultado agora eh %d\n",c);

    if(i==j)
        c=2*c;

    printf(" O resultado agora eh %d\n",c);

    A=16;
    B=7;

    if(A<10){
            if(B>5)
                printf(" Primeiro caso\n");
            else
                printf(" Segundo caso\n");
    }
    else{
            if(B>5)
                printf(" Terceiro caso\n");
            else
                printf(" Quarto caso\n");
    }

//condicionais, relacionais e logicos
    if((A<15)&&(B<6)){
            k=i*j;
            printf(" Opcao 1: k = %d\n",k);
    }
    else if((A<15)&&(B>6)){
            k=i-j;
            printf(" Opcao 2: k = %d\n",k);
    }
    else{
            k=i/j;
            printf(" Opcao 3: k = %d\n",k);
    }

    if((A<15)||(B<6))
        printf(" Opcao 4\n");
    else if((A<15)||(B>6))
        printf(" Opcao 5\n");
    else
        printf(" Opcao 6\n");

        //funcoes matematicas
    valor1=1.0;
    valor2=6.0;
    valor3=5.0;

    u=funcao_matematica1(valor1,valor2,valor3);

    printf(" Resultado da funcao_matematica1: %f\n",u);

    funcao_matematica2(valor1,valor2,valor3);

    return 0;
}
//funcao matematica 1
float funcao_matematica1 (float x, float y, float z){
    float w;

    w=x+y+z;

    opcao=2;

    printf(" Opcao = %d\n",opcao);

    if((x>y)&&(z>4.0))
        return w*2;
    else
        return w;
}
//funcao matematica 2
void funcao_matematica2 (float x, float y, float z){
    float w;

    w=x+y+z;

    opcao=3;

    printf(" Opcao = %d\n",opcao);

    if((x>y)&&(z>4.0))
        printf(" Caso 1: %lf\n", w*2.0);
    else
        printf(" Caso 2: %lf\n", w);
}
