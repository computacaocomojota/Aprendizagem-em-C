/*

2) Escreva um programa, em C, que peça ao usuário para fornecer dois números
inteiros, obtenha-os da entrada padrão, usando scanf, e imprima:

  a) O maior deles seguido das palavras “e maior”. Se os números foram iguais, imprima a
  mensagem “estes números são iguais”.

  b) O resultado de dividir o maior pelo menor. Se o menor for zero imprima “Operação
  incorreta”.

  Escolha os tipos de dados que achar mais apropriados para a implementação.

  *obs: Use apenas o operador condicional (?).

*/

#include <stdio.h>

int main(void){

  int a,b,div;
  
  printf("\nOlá,Usuário!Digite um número inteiro: ");
  scanf("%d",&a);
  printf("\nAgora,digite um outro número inteiro: ");
  scanf("%d",&b);

  (a==b) ? printf("\nEstes números são iguais\n")       : 0;
  (a>b)  ? printf("\nO número %d é maior que %d\n",a,b) : 0;
  (b>a)  ? printf("\nO número %d é maior que %d\n",b,a) : 0;

  div = (a==b&&a!=0&&b!=0) ? 1 : 0;
  div = (a>b&&b!=0)  ? a/b : 0; 
  div = (a<b&&a!=0)  ? b/a : 0;
  
  (a==0&&b==0) ? printf("\nA divisão entre %d e %d é uma indeterminação matemática\n",a,b) : 0; 
  (a==0&&b!=0) ? printf("\nOperação Incorreta\n") : 0; 
  (a!=0&&b==0) ? printf("\nOperação Incorreta\n"): 0;
  
  (a==b&&a!=0&&b!=0) ? printf("\nO resultado da divisão entre %d e %d é: %d",a,b,div) : 0;
  (a>b&&b!=0) ? printf("\nO resultado da divisão entre %d e %d é: %d",a,b,div)        : 0;
  (a<b&&a!=0) ? printf("\nO resultado da divisão entre %d e %d é: %d",b,a,div)        : 0;
  
  return 0;
  
}