/*

4) Escreva um programa que:

    a) Peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão, usando scanf.

    b) Determine se o valor fornecido pode ser representado, sem perda de informação como um short int. 

    c) Imprima na tela o valor fornecido, seguido das palavras “e maior que um short int” ou “este valor pertence ao intervalo dos short int”. 

    *obs: Use apenas o operador condicional (?).

*/

#include <stdio.h>
#include <limits.h>

int main(){

  int num;

  printf("\nDigite um número inteiro: ");
  scanf("%d",&num);

  (num>SHRT_MAX) ? printf("\nO valor fornecido é maior que um short int\n") : printf("\nEste valor pertence ao intervalo dos short int\n");

  return 0;
}