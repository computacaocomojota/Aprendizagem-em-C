/*
   
 3) Os caracteres que representam os dígitos estão organizados de forma contínua, na tabela ASCII, do ‘0’ ao ‘9’. Proponha e implemente, na linguagem C, um algorítmos que converta:

    a) um um valor inteiros entre 0 e 9 no correspondente caractere. 
    Exemplo: dado o valor 5 retorna o caractere ‘5’;

    b) um caractere numérico no correspondente valor que ele representa. 
    Exemplo: dado o carácter ‘5’ retorna o valor inteiro 5;

*/

#include <stdio.h>

int main(void){

  int a,b;
  char c,d;

  printf("\nDigite um número inteiro entre 0 e 9: ");
  scanf("%d",&a);
  d = a + '0';
  printf("\nO número inteiro %d em caractere é: %c\n",a,d);
  
  scanf("%[^\n]s",&c);
  scanf("%*c");
  
  printf("\nDigite um caractere númerico: ");
  scanf("%c",&c);
  b = c-'0';
  printf("\nO caractere númerico %c em inteiro é: %d\n",c,b);

  return 0;

}
  
 