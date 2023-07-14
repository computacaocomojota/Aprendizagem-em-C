/*

5) Escreva um programa que:

   a) Declare três variáveis de tipo double, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado; 

   b) Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis x e y respectivamente;

   c) Atribua à variável z a somas das variáveis a e b, imprima o resultado na tela; 

   d) Atribua à variável z a média das variáveis x e y, imprima o resultado na tela;

   e) Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela;

   f) Atribua à variável z o maior valor entre as variáveis x e y, imprima o resultado na tela;

   g) Atribua à variável z o menor valor entre as variáveis x e y, imprima o resultado na tela;

*/

#include <stdio.h>

int main(void){

  double x;
  double y;
  double z;

  printf("\nDigite o primeiro número de ponto flutuante:");
  scanf("%f",&x);

  printf("\nDigite o segundo número de ponto flutuante:");
  scanf("%f",&y);

  z = x+y;
  printf("\nA soma entre %f e %f é: %f\n",x,y,z);

  z = (x+y)/2;
  printf("\nA média entre %f e %f é: %f\n",x,y,z);

  z = x*y;
  printf("\nO produto entre %f e %f é: %f\n",x,y,z);

  z = (x>y) ? x : y;
  printf("\nO valor de z passou a ser o maior valor entre %f e %f que é: %f\n",x,y,z);

  z = (x<y) ? x : y;
  printf("\nO valor de z passou a ser o menor valor entre %f e %f que é: %f\n",x,y,z);

  return 0;
}