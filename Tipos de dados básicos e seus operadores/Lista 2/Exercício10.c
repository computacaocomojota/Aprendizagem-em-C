/*

10) Escreva um programa que:

    a) Leia dois pares de valores (x1, y1) e (x2, y2) de pontos do plano. 
    b) Informe a equação da função do tipo f(x)= ax + b que passa por estes pontos.

*/

#include <stdio.h>

int main(void){

  float x1,y1,x2,y2,a,b,c,d;

  printf("\nOlá,Usuário! Digite um valor para X1: ");
  scanf("%f",&x1);
  printf("\nDigite um valor para Y1: ");
  scanf("%f",&y1);
  printf("\nDigite um valor para X2: ");
  scanf("%f",&x2);
  printf("\nDigite um valor para Y2: ");
  scanf("%f",&y2);

  a = y2-y1;
  b = x2-x1;
  c = (a==0&&b==0) ? 0 : a/b;
  d = y1-a*x1; 

  printf("\nO valor de a é: %.2f\n",c);
  printf("\nO valor de b é: %.2f\n",d);

  (d==y1) ? printf("\nf(x) = %.2f é uma função constante\n",d)       : 0;
  (d>0) ? printf("\nf(x) = %.2fx+%.2f é uma função do 1ºgrau\n",c,d) : 0;
  (d<0) ? printf("\nf(x) = %.2fx%.2f é uma função do 1º grau\n",c,d) : 0;
  
  return 0;
  
}