/*

2) Escreva um programa, usando quando necessário o operador (?), que:

    a) Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se achar mais apropriado; 

    b) Peça ao usuário para digitar dois números inteiros, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis a e b respectivamente;

    c) Atribua à variável c a somas das variáveis a e b, imprima o resultado na tela em formato hexadecimal; 

    d) Atribua à variável c o produto das variáveis a e b, imprima o resultado na tela em formato octal; 

    e) Atribua à variável c o módulo (valor absoluto) da diferença entre as variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0 imprimir -c, caso contrário imprima c)

    f) Atribua à variável c o quociente entre variáveis a e b, imprima o resultado na tela; (se b = 0 a divisão não é possível e um aviso deve ser apresentado ao usuário) 

    g) Se a divisão anterior for possível, determinar se a é divisível de forma exata por b, mostrar o resultado na tela;

*/

#include <stdio.h>

int main(void){

  int a,b,c,resto;

  printf("\nOlá,Usuário! Digite o primeiro número inteiro: ");
  scanf("%d",&a);
  printf("\nAgora, digite o segundo número inteiro: ");
  scanf("%d",&b);

  c = a+b;
  printf("\nO valor da soma entre %d e %d em hexadecimal é: %x\n",a,b,c);

  c = a*b;
  printf("\nO valor do produto entre %d e %d em octal é: %o\n",a,b,c);

  c = a-b;
  c = (c<0) ? -c : c;
  printf("\nO valor da diferença em módulo entre %d e %d é: %d\n",a,b,c);

  c = a/b;
  (b==0) ? printf("\nA divisão não é possível, porque o segundo número inteiro é 0\n") : printf("\nO valor da divisão entre %d e %d é: %d\n",a,b,c); 
  
  resto = a%b;
 (a%b==0) ? printf("\nA divisão entre %d e %d é exata\n",a,b): printf("\nA divisão entre %d e %d não é exata e tem como resto da divisão = %d.\n",a,b,resto);
  
  return 0;
    
}