/*

3) Escreva um programa, usando quando necessário o operador (?), que:

    a) Declare uma variável de tipo int, vamos chamar de cha mas você pode escolher outro identificador se achar mais apropriado;

    b) Peça ao usuário para digitar um números inteiros positivo, obtenha-o da entrada padrão, usando scanf,  e atribua os valores digitados à variável cha; (se o valor fornecido for negativo, converter no correspondente valor positivo);

    c) Identifique se o valor fornecido pelo usuário faz parte dos valores utilizados para a representação de caracteres imprimíveis da tabela ASCII e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

    d) Se o valor estiver no intervalo dos caracteres não imprimíveis, menores que 32, converter no caractere 32 e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

    e) Se o valor fornecido for maior que o valor máximo do intervalo, 127, utilizar o operador % para converter num valor do intervalo dos caracteres e aplique c ou d;

*/

#include <stdio.h>

int main(void){

  int cha;

  printf("\nOlá,Usuário! Digite um número inteiro positivo: ");
  scanf("%d",&cha);

  cha = (cha<0) ? -cha : cha;
 
(cha>=32&&cha<=127) ? printf("\nO valor %d em decimal é: %d\nO valor de %d em octal é: %o\nO valor de %d em hexadecimal é: %x\nO valor %d representa o caractere: %c\n",cha,cha,cha,cha,cha,cha,cha,cha) : 0;
    
cha = (cha<32) ? '0' : cha;
(cha=='0') ? printf("\nO valor %d em Decimal é: %d\nO valor de %d em Octal é: %o\nO valor de %d em Hexadecimal é: %x\nO valor %d representa o Caractere: %c\n",cha,cha,cha,cha,cha,cha,cha,cha) : 0;

cha = (cha>127) ? cha%128+32 : 0;
(cha>=32&&cha<=127) ? printf("\nO valor %d em decimal é: %d\nO valor de %d em octal é: %o\nO valor de %d em hexadecimal é: %x\nO valor %d representa o caractere: %c\n",cha,cha,cha,cha,cha,cha,cha,cha) : 0;

  return 0;
  
}