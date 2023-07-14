/*

7) Escreva um programa que:

    a) Leia os valores (x, y) de um ponto do plano  
    b) Informe em qual quadrante o ponto se encontra 
    c) Use apenas o operador condicional (?). 
   
   *obs: Lembre que um ponto, no plano cartesiano, 
    pode estar no primeiro quadrante ( se x> 0 e y>0), 
    no segundo quadrante ( se x<0 e y>0), 
    no terceiro quadrante ( se x<0 e y<0), 
    no quarto quadrante (se x>0 e y<0) ou 
    sobre um dos eixos (caso x=0 ou y=0).

*/

#include <stdio.h>

int main(void){
 
  int x;
  int y;

  printf("\nDigite um valor para X: ");
  scanf("%d",&x);

  printf("\nDigite um valor para Y: ");
  scanf("%d",&y);

  (x>0&&y>0) ? printf("\nO ponto (%d,%d) está no primeiro quadrante.\n",x,y) : 0;
  (x<0&&y>0) ? printf("\nO ponto (%d,%d) está no segundo quadrante\n",x,y)   : 0;
  (x<0&&y<0) ? printf("\nO ponto (%d,%d) está no terceiro quadrante.\n",x,y) : 0;
  (x>0&&y<0) ? printf("\nO ponto (%d,%d) está no quarto quadrante\n",x,y)    : 0;
 (x==0&&(y>0||y<0)) ? printf("\nO ponto (%d,%d) está sobre o eixo Y\n",x,y)  : 0;
 ((x>0||x<0)&&y==0) ? printf("\nO ponto (%d,%d) está sobre o eixo X\n",x,y)  : 0;
  
  return 0;
  
}