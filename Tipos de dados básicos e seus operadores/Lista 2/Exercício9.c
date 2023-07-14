/*

9) Escreva um programa que:

    a) Leia da entrada padrão o lado de um quadrado.
    b) Imprima o tamanho da sua diagonal. 
    c) Imprima o valor do seu perímetro.
    d) Imprima a sua área.

*/

#include <stdio.h>
#include <math.h>

int main(void){

  float lado,diagonal,perimetro,area;
  

  printf("\nOlá,Usuário! Digite o tamanho do lado do quadrado: ");
  scanf("%f",&lado);
  
  lado = (lado<0) ? -lado : lado;
  diagonal = lado*sqrt(2);
  perimetro = lado*4;
  area = lado*lado;

  printf("\nO valor da diagonal do quadrado é aproximadamente: %.2f m\nO valor do perímetro do quadrado é: %.2f m\nO valor da área do quadrado é: %.2f m2",diagonal,perimetro,area);

  return 0;
  
}