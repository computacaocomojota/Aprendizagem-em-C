/*

12) Escreva um programa que:

a) Leia da entrada padrão os valores reais dos coeficientes a, b e c, de um polinômio de segundo grau do tipo p(x)=ax2+bx+c.

b) Imprima se o polinômio tem uma, duas ou nenhuma raiz real (lembre das suas aulas de segundo grau qual a condição que define qual o número de raízes de um polinômio).

c) Imprima Se tiver raízes (uma ou duas) imprima o valor das mesmas. No exercício anterior você deve ter descoberto como utilizar a função sqrt() para calcular raízes quadradas.

d) Leia da entrada padrão um valor para x e imprima o valor de p(x).


*/

#include <stdio.h>
#include <math.h>

int main(void){

  float a,b,c,delta,px,x,x1,raiz1,raiz2;
  
  printf("\nOlá,Usuário!Digite um valor para o coeficiente a: ");
  scanf("%f",&a);
  
  (a==0) ? printf("\nO valor do coeficiente a não pode ser zero!\n") : 0;
  (a==0) ? printf("\nEntre com um novo valor para a: ")              : 0;
  (a==0) ? scanf("%f",&a)                                            : 0;
  
  printf("\nDigite um valor para o coeficiente b: ");
  scanf("%f",&b);
  printf("\nDigite um valor para o coeficiente c: ");
  scanf("%f",&c);

  
  delta = b*b-4*a*c;
  
  (delta>=0) ? raiz1 = -(b) + sqrt(delta)/2*a : 0;
  (delta<0)  ? raiz2 = -(b) - sqrt(delta)/2*a : 0;

  (delta==0) ? printf("\nO polinômio P(x) tem duas raízes reais, porém elas são iguais e o valor delas é %f.\n",raiz1) : 0;
  (delta>0)  ? printf("\nO polinômio P(x) tem duas raízes reais e distintas e elas são %f e %f.\n",raiz1,raiz2) : 0;
  (delta<0)  ? printf("\nO polinômio P(x) não possui raízes reais.\n") : 0;

  (delta>=0) ? printf("\nAgora,digite um valor para x: ") : 0;
  (delta>=0) ? scanf("%f",&x) : 0;
  
  px = a*x*x+b*x+c;
  
 (delta>=0) ? printf("\nO valor de P(%f) = %f\n",x,px) : 0;

  return 0;
  
}