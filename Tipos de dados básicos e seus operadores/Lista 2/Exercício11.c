/*

11) Escreva um programa que:
 
    a) Leia da entrada padrão o tamanho dos catetos de um triângulo retângulo.
    b) Imprima o tamanho do quadrado da hipotenusa.
    c) Imprima o valor do perímetro do triângulo.
    d) Imprima o valor da área do referido triângulo.

    *obs: (O arquivo de cabeçalho math.h inclui a função sqrt() que retorna a raiz quadrada do parâmetro de entrada.)

*/

#include <stdio.h>
#include <math.h>

int main(void){

  int a,b,c,perimetro,area;

printf("\nOlá,Usuário! Digite o primeiro lado do triângulo retângulo: ");
scanf("%d",&b);
printf("\nDigite o valor do segundo lado do triângulo: ");
scanf("%d",&c);

b = (b<0) ? -b : b;
c = (c<0) ? -c : c;
  
a = sqrt(b*b+c*c);
  perimetro = a+b+c;
  area = b*c/2;

  printf("\nO valor do quadrado da hipotenusa é: %d m\nO valor do perímetro é: %d m\nO valor da área é: %d m2\n",a*a,perimetro,area);
 
  return 0;
  
}