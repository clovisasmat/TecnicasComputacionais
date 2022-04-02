/*Tecnicas computacionais 2022-1
  Exemplo -- ponteiros de funccoes
  utilizando if-else
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

//variaveis globais
int opcao=1;

//prototipo de funccao
float funcao_matematica3(float x, float y, float z);

float funcao_matematica4(float x, float y, float z);

float (*funcao_geral)(float,float,float);


int main(){
//declaraccao de variaveis
    int k;

    float X,Y,Z;
    float resposta[10];

//entrada da opccao pelo teclado
    printf(" Digite a opcao: \n");
    scanf("%d",&opcao);


    if(opcao==3)
        funcao_geral=funcao_matematica3;
    else if(opcao==4)
        funcao_geral=funcao_matematica4;
    else
        printf(" Opcao invalida\n");



    if((opcao==3)||(opcao==4)){
        for(k=0;k<10;k++){
            X=k*1.0;
            Y=k+2.0;
            Z=5.0;
            resposta[k]=funcao_geral(X,Y,Z);
            printf("%lf\n",resposta[k]);
        }
    }

    if(opcao==3){
        for(k=0;k<10;k++){
            X=k*1.0;
            Y=k+2.0;
            Z=5.0;
            resposta[k]=funcao_matematica3(X,Y,Z);
        }
    }
    else if(opcao==4){
        for(k=0;k<10;k++){
            X=k*1.0;
            Y=k+2.0;
            Z=5.0;
            resposta[k]=funcao_matematica4(X,Y,Z);
        }
    }
    else{
        printf(" Opcao invalida\n");
    }


    for(k=0;k<10;k++){
        X=k*1.0;
        Y=k+2.0;
        Z=5.0;

        if(opcao==3)
            resposta[k]=funcao_matematica3(X,Y,Z);
        else if(opcao==4)
            resposta[k]=funcao_matematica4(X,Y,Z);
        else{
            printf("Opcao invalida\n");
            break;
        }
    }


    if((opcao==3)||(opcao==4)){
        for(k=0;k<10;k++){
            printf("%lf\n",resposta[k]);
        }
    }


    printf("\n");

    return 0;

}

//funccao que retorna o valor da soma dos argumentos
float funcao_matematica3(float x, float y, float z){
    return x+y+z;
}

//funccao que retorna o valor da multiplicaccao dos argumentos
float funcao_matematica4(float x, float y, float z){
    return x*y*z;
}
