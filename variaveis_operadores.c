/*Tecnicas computacionais 2022-1
  Variáveis e operadores matemáticos
  08/02/2022*/

#include<stdio.h>
#include<stdlib.h>
//inclusao de bibliotecas de matematica
#include<complex.h>
#include<math.h>

/*prototipo da funcao trigonometrica que retorna um valor real,
  com parametros reais*/

float trigonometrica (float x,float y);

int main(){
    //declaracao e inicializacao de variaveis

    //variavel do tipo caracter
    char s='7';

    //variavel do tipo inteiro
    int a=1;
    int b=2;
    int c=3;

    //declaracao de variaveis
    int ifa_1,ifa_2;
    int A;
    double x,y,z;

    //atribuicao de valor utilizando o operador +
    ifa_1=a+b;
    A=a+b+c;

    //imprime na tela os valores das variaveis
    //operador -
    printf(" a = %d\n b = %d\n A = %d\n",a,b-3,A);

    x=2.0;
    y=3.0;

    z=trigonometrica(x,y);

    /*imprime na tela a variavel z com arredondamento
      na quinta casa decimal*/

    printf("\n x = %f\n y = %f\n z = %.5f\n",x,y,z);

    return 0;
}

//funcao que retorna o valor do sen(x) + cos(y)
float trigonometrica (float x,float y){
  return sin(x)+cos(y);
}
