/*

2) Escreva um programa que:
 
    a) Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3, mas você pode escolher outro identificador se achar mais apropriado; 

    b) Peça ao usuário para digitar dois caracteres, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis ch1 e ch2 respectivamente;

    c) Atribua à variável ch3 o caractere que antecede ao caractere ch1, imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um caractere imprimível, substitua ele pelo caractere '_') 

    d) Atribua à variável ch3 o caractere que precede ao caractere ch2, imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um caractere imprimível, substitua ele pelo caractere '_') 

    e) Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela; 

    f) Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela; 

    g) Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela;


*/

#include <stdio.h>

int main(){

  char ch1,ch2,ch3;

  printf("\nDigite o primeiro caractere: ");
  scanf("%c",&ch1);
  scanf("%[^\n]s",&ch2);
  scanf("%*c");

  printf("\nDigite o segundo caractere: ");
  scanf("%c",&ch2);

  ch3 = (ch1-1<32) ? ' ' : ch1-1;

  printf("\nO caractere %c em Decimal: %d\n",ch3,ch3);
  printf("\nO caractere %c em Octal: %o\n",ch3,ch3);
  printf("\nO caractere %c em Hexadecimal: %x\n",ch3,ch3);

  ch3 = (ch2+1<32) ? ' ' : ch2+1;

  printf("\nO caractere %c em Decimal: %d\n",ch3,ch3);
  printf("\nO caractere %c em Octal: %o\n",ch3,ch3);
  printf("\nO caractere %c em Hexadecimal: %x\n",ch3,ch3);

  ch3 = (ch1>='A'&&ch1<='Z') ? 'A' : ' ';
  printf("\nO 1º valor de ch3 é: %c\n",ch3);

  ch3 = (ch2>='a'&&ch2<='z') ? 'a' : ' ';
  printf("\nO 2º valor de ch3 é: %c\n",ch3);

  ch3 = ((ch1>='0'||ch2>='0')&&(ch1<='0'||ch2<='9')) ? '1' : ' ';
   printf("\nO 3º valor de ch3 é: %c\n",ch3);
  
  return 0;
  
}