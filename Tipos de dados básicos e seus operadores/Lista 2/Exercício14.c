/*

14) Escreva um programa que:

    a) Leia as coordenadas (x, y) de um ponto pelo teclado.
    b) Determine se o ponto está dentro ou fora da circunferência.

    *obs: Uma circunferência de raio 1.0 é composta pelos pontos (x, y) que satisfazem a condição x2+ y2= 1.0.

*/

#include <stdio.h>

int main(){

  float x,y;

  printf("\nEntre com a coordenada X: ");
  scanf("%f",&x);
  printf("\nEntre com a coordenada Y: ");
  scanf("%f",&y);

  (x*x+y*y<1) ? printf("\nA coordenada (%.2f,%.2f) está dentro da circunferência.\n",x,y) : 0;
  (x*x+y*y==1) ? printf("\nA coordenada (%.2f,%.2f) está sobre da circunferência.\n",x,y) : 0;
  (x*x+y*y>1) ? printf("\nA coordenada (%.2f,%.2f) está fora da circunferência.\n",x,y)   : 0;

  return 0;
  
}