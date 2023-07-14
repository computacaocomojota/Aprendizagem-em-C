/*

6) Escreva um programa que:

    a) Leia um número inteiro utilizando o operador %.
    b) Converta ele num valor entre 1 e 6.
    c) Imprima o resultado na tela.

*/

#include <stdio.h>

int main(void){

  int num;

  printf("\nOlá,Usuário! Digite um número inteiro: ");
  scanf("%d",&num);

  num = num%6+1;

  printf("\nO valor de num agora é: %d\n",num);
  
  return 0;
  
}