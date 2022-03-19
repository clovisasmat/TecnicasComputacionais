/*Tecnicas computacionais 2022-1
  Primeiro programa em C
  01/02/2022*/

//biblioteca de entrada-saida e biblioteca-padrao
#include<stdio.h>
#include<stdlib.h>

//prototipo da funcao hello
void hello();

//funcao principal main
int main(){
  printf("Hello, world\n");//imprime hello, world na tela

  hello();

  return 0;
}

//funcao que imprime hello, world na tela
void hello(){
  printf("Hello, world\n");
}
