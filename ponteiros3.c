/*Tecnicas computacionais 2022-1
  Exemplo -- ponteiros de funccoes
  utilizando switch
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

//variaveis globais
int opcao=1;

//prototipos de funccoes

float funcao_matematica3(float x, float y, float z);

float funcao_matematica4(float x, float y, float z);

float (*funcao_geral)(float,float,float);



int main(){
    //declaraccao das variaveis
    int k;

    float X,Y,Z;
    float resposta[10];

    //entrada da opccao desejada pelo teclado
    printf("Digite a opcao:\n");
    scanf("%d",&opcao);

    //Seleccao a partir do switch case
    switch(opcao){
        case 3:
            funcao_geral=funcao_matematica3;
		    break;
        case 4:
            funcao_geral=funcao_matematica4;
		    break;
        default:
            printf(" Opccao invalida\n");
	        break;
    }



    if((opcao==3)||(opcao==4)){
        for(k=0;k<10;k++){
            X=k*1.0;
            Y=k+2.0;
            Z=5.0;
            resposta[k]=funcao_geral(X,Y,Z);
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
