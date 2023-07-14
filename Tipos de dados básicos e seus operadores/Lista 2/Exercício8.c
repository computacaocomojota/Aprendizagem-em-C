/*

8) Escreva um programa que:

    a) Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado; 

    b) Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis x e y respectivamente;

    c) Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda, direita ou na curva). Imprima o resultado na tela; 

    d) Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas;(distância euclidiana se calcula como x2+y2, pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h) 

    e) Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica; 

*/

#include <stdio.h>
#include <math.h>

int main(void){

  float x,y,z;

  printf("\nOlá,Usuário! Digite um valor de ponto flutuante: ");
  scanf("%f",&x);
  printf("\nAgora, digite outro valor de ponto flutuante: ");
  scanf("%f",&y);

  (5*x+2==y) ? printf("\nO ponto (%.2f,%.2f) pertence a reta.\n",x,y)       : 0;
  (5*x+2<y) ? printf("\nO ponto (%.2f,%.2f) está a esquerda da reta\n",x,y) : 0;
  (5*x+2>y) ? printf("\nO ponto (%.2f,%.2f) está a direita da reta.\n",x,y) : 0;
  
  z = sqrt(x*x+y*y);
  printf("\nA distância euclidiana entre os pontos (%.2f,%.2f) é: %f\n",x,y,z);
  
  z = x*y;
  printf("\nO produto entre %.2f e %.2f é: %e\n",x,y,z);

  return 0;
  
}