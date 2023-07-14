/*

1) Escreva um programa que:

    a) Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3  mas você pode escolher outro identificador se achar mais apropriado;

    b) Peça ao usuário para digitar um caractere, obtenha o mesmo da entrada padrão, usando scanf,  e atribua o valor digitado à variável ch1;

    c) Verifique, utilizando o operador condicional (?) se se trata de:
        
        I)   uma letra maiúscula;
        II)  uma letra minúscula;
        III) um dígito;
        IV)  outro tipo de caractere;

    d) Atribua à variável ch2 o caractere 81, identifique e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

    e) Dado que o caractere ch2 é uma letra maiúscula, atribua à variável ch3 o caractere que corresponde à mesma letra minúscula (não pode procurar na tabela ASCII) e Imprima ch3 na tela, utilizando printf, em formato numérico  decimal, octal, hexadecimal e como caractere;

*/

#include <stdio.h>

int main(void){

  char ch1,ch2,ch3;

  printf("\nOlá,Usuário! Digite um caractere: ");
  scanf("%c",&ch1);

  (ch1>='A'&&ch1<='Z') ? printf("\nO caractere %c é uma letra maiúscula.\n",ch1) :
  (ch1>='a'&&ch1<='z') ? printf("\nO caractere %c é uma letra minúscula.\n",ch1) :
  (ch1>='0'&& ch1<='9') ? printf("\nO caractere %c é um dígito.\n",ch1)          : 
  printf("\nO caractere %c é outro tipo de caractere.",ch1);

  ch2 = 'Q';
  printf("\nO caractere %c em decimal é: %d\nO caractere %c em octal é: %o\nO caractere %c em hexadecimal é: %x\nO caractere %c em caractere é: %c\n",ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2);

  ch3 = ch2-('A'-'a');
  printf("\nO caractere %c em decimal é: %d\nO caractere %c em octal é: %o\nO caractere %c em hexadecimal é: %x",ch3,ch3,ch3,ch3,ch3,ch3);

  return 0;
      
}