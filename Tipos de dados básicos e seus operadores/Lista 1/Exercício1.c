/*

1) Escreva um programa que:

  a) Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se achar mais apropriado; 

  b) Peça ao usuário para digitar dois números inteiros, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis a e b respectivamente;

  c) Atribua à variável c o valor da expressão 4*a + b / 3 - 5;  

  d) Atribua à variável c o valor da expressão 4*(a + b) / (3 - 5);

  e) Justifique por que os resultados destas expressões são diferentes, demonstre implementando outra variação da mesma expressão que gere resultado diferente; 
   
  f) Utilizando o último valor calculado de c, recalcule o valor da mesma utilizando a expressão a2 + 2*b + c , imprima o resultado na tela; 

*/


#include <stdio.h>

int main(void){

  int a,b,c,d,e,f,g;


  printf("\nOlá,Usuário! Digite o primeiro número inteiro: ");
  scanf("%d",&a);

  printf("\nDigite o segundo número inteiro: ");
  scanf("%d",&b);

  c = 4*a+b/3-5;
  d = 4*(a+b)/(3-5);
  e = 4*(a+b)/3-5;
  f= 4*a+b/(3-5);
  
  printf("\nO primeiro valor é: %d\n",c);
  printf("\nO segundo valor é: %d\n",d);
  printf("\nO terceiro valor é: %d\n",e);
  printf("\nO quarto valor é: %d\n",f);

  g = a*a + 2*b + c;
  printf("\nO primeiro valor recalculado é: %d\n",g);
  

  return 0;
  
}