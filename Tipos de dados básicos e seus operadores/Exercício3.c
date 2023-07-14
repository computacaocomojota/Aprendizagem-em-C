/*

3) Escreva um programa que:

  a) peça ao usuário para fornecer dois números inteiros, 
  obtenha-os da entrada padrão, usando scanf.
  
  b) imprima o maior deles seguido das palavras “e maior”. Se os números foram iguais, 
  imprima a mensagem “estes números são iguais”. Use apenas o operador condicional (?).

*/

#include <stdio.h>

int main(void){
  
  int inteiro1;
  int inteiro2;
  
  printf("\nDigite o primeiro número inteiro:");
  scanf("%d",&inteiro1);

  printf("\nDigite o segundo número inteiro:");
  scanf("%d",&inteiro2);

  (inteiro1>inteiro2) ? printf("\nO primeiro número interior é maior que o segundo.\n") : 
  (inteiro2>inteiro1) ? printf("\nO segundo número inteiro é maior que o primeiro.\n") : printf("\nO primeiro número inteiro é igual ao segundo número inteiro.\n");

  
  return 0;
    
}