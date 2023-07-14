/*

6) Escreva um programa que:

    a) Leia da entrada padrão o raio de um círculo
    b) Imprima o seu diâmetro
    c) Imprima o valor de sua circunferência (perímetro)
    d) Imprima a sua área


*/

#include <stdio.h>

int main(void){

  const int pi = 3;
  int raio;
  int diametro;
  int perimetro;
  int area;

  printf("\nOlá,Usuário! Digite o valor de um raio:");
  scanf("%d",&raio);

  diametro = 2*raio;
  perimetro = 2*pi*raio;
  area = pi*(raio*raio);

  printf("\nO valor do diâmetro é aproximadamente: %d m\n",diametro);
  printf("\nO valor do perímetro é aproximadamente: %d m\n",perimetro);
  printf("\nO valor da área é aproximadamente: %d m2\n",area);

  return 0;
  
}