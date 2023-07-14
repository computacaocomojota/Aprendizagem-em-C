/*

1) O seguinte código implementa um algoritmo que pretende, dado um valor inteiro entre 0 e 1000 (0 e 1000 não estão incluídos), imprimir uma sequência de caracteres
substituindo cada dígito do número pelo caractere ‘P’, quando o dígito é par, ou ‘I’, quando odígito for ímpar. 
Com base na análise do código faça as correções necessárias no mesmo para que funcione como esperado.

*/

#include <stdio.h>
int main(void){

  int num,tmp;
  char ch1,ch10,ch100;

  printf("\nDigite um número entre 0 e 1000: ");
  scanf("%d",&num);

  num = (num<=0 || num>=1000) ? 567 : num;
  tmp = num;
  tmp = num%10;
  ch1 = (tmp%2==0) ? 'P':'I';
  tmp = num/10;
  ch10 = (tmp==0) ? ' ' : ((tmp%2==0) ? 'P':'I');
  tmp = num/100;
  ch100 = (tmp==0) ? ' ' : ((tmp%2==0)? 'P':'I');
  printf("\nNúmero: %d - %c%c%c\n",num,ch100,ch10,ch1);
  return 0;
}