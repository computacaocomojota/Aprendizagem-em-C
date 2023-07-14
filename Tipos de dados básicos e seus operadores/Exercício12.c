/*

5) Escreva um programa que:

    a) Peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada padrão, usando scanf.

    b) Determine se o valor fornecido pode ser representado, sem perda de informação como um int. 

    c) Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).


*/

#include <stdio.h>
#include <limits.h>

int main(){

  unsigned long int num;

  printf("\nDigite um número inteiro longo sem sinal: ");
  scanf("%lu",&num);

  (num>INT_MAX) ? printf("\nO valor fornecido é maior que um int\n") : printf("\nEste valor pertence ao intervalo dos int\n");
  
  return 0;
}