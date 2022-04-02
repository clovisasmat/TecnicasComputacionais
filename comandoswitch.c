/*Tecnicas computacionais 2022-1
  Exemplo -- Comando de seleccao switch
  22/02/2022*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

//variaveis globais
int alternativa;

float F;
float G;
float H;

//prototipo de funccao
void escolha();

int main(){

    printf("Digite 1, 2 ou 3 para escolher os valores de F, G, H: ");
    scanf("%d",&alternativa);

    escolha();

    return 0;
}

//funccao escolha
void escolha()
{
	switch(alternativa)
	{
		case 1:
		    F=1.0;
		    G=2.0;
		    H=3.0;
		    printf("\n F = %f, G = %f, H = %f\n", F, G, H);
		    break;
		case 2:
		    F=0.0;
		    G=-2.0;
		    H=5.0;
		    printf("\n F = %f, G = %f, H = %f\n", F, G, H);
		    break;
		case 3:
		    F=3.0;
		    G=2.5;
		    H=4.0;
		    printf("\n F = %f, G = %f, H = %f\n", F, G, H);
		    break;
		default:
		    F=1.0;
		    G=1.0;
		    H=1.0;
		    printf("\n F = %f, G = %f, H = %f\n", F, G, H);
		    break;
	}
}
