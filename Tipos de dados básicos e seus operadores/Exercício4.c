/*

4) Escreva um programa que:

    a) leia um número inteiro e informe se ele é par ou ímpar.

*/

#include <stdio.h>

int main(void){

  int numerointeiro;
  
  printf("\nDigite um número inteiro:");
  scanf("%d",&numerointeiro);

  (numerointeiro%2==0) ? printf("\nO número %d é par\n",numerointeiro) : printf("\nO número %d é impar\n",numerointeiro);

  return 0;

}