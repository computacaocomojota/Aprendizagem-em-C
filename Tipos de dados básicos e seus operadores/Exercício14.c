/*

7)Escreva um programa que:
 
    a) Leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros de zero até o número fornecido. 
    b) A soma dos números inteiros de 1 até n se calcula como n(n+1)2. 
    c) Imprima um resultado na tela. 
    
    *obs: Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? 
    (use apenas o que vimos em sala de aula até agora)

*/

#include <stdio.h>

int main(void){

  int num;
  int soma;

  printf("\nOlá,Usuário! Digite um número inteiro positivo: ");
 scanf("%d",&num);
   
 num = (num<0) ? -num: num;
 (num<0) ? printf("\nO número %d foi alterado para o seu módulo, porque o comando foi digitar um número inteiro positivo.\n",num) : 0;
  
  soma = num*(num+1)/2;
  printf("\nA soma de todos os números inteiros positivos de 1 e até %d é: %d",num,soma);
  
  return 0;
  
}