/*

13)  Escreva um programa que: 

a) Leia da entrada padrão as notas dos 5 créditos da disciplina CET635-LPI e calcule a média do semestre. Imprima o resultado na tela.
b) Dependendo da média calculada anteriormente, determine se o aluno está de prova final ou não.
c) Se o aluno estiver de prova final, leia a nota da prova final e calcule a média do semestre.
d)Imprima a nota final do aluno na disciplina.

*/

#include <stdio.h> 

int main(void){

  float cred1,cred2,cred3,cred4,cred5;
  float media,nota,provafinal,mediafinal;

  printf("\nDigite o valor do 1º crédito: ");
  scanf("%f",&cred1);
  cred1 = (cred1<0) ? -cred1 : cred1;
  
  printf("\nDigite o valor do 2º crédito: ");
  scanf("%f",&cred2);
  cred2 = (cred2<0) ? -cred2 : cred2;
  
  printf("\nDigite o valor do 3º crédito: ");
  scanf("%f",&cred3);
  cred3 = (cred3<0) ? -cred3 : cred3;
  
  printf("\nDigite o valor do 4º crédito: ");
  scanf("%f",&cred4);
  cred4 = (cred4<0) ? -cred4 : cred4;
  
  printf("\nDigite o valor do 5º crédito: ");
  scanf("%f",&cred5);
  cred5 = (cred5<0) ? -cred5 : cred5;
  
  nota = cred1+cred2+cred3+cred4+cred5;
  media = nota/5;
  provafinal = (media<7) ? (50-6*media)/4 : 0;

  printf("\nSua média é: %.2f\n",media);
  
  (media>=7) ? printf("\nParabéns! Você está de férias\n") : 0;
  (media<7) ? printf("\nPara passar no semestre você precisa tirar na final: %.2f\n",provafinal) : 0;
  
  (media<7&&provafinal>10) ? printf("\nVocê já está reprovado no semestre por precisar de uma nota maior que o valor máximo da prova final.\n") : 0;

  (media<7&&provafinal<=10) ? printf("\nDigite o valor da prova final: ") : 0;
  (media<7&&provafinal<=10) ? scanf("%f",&provafinal) : 0;

   mediafinal = (media<7&&provafinal<=10) ? (4*provafinal+6*media)/10 : 0;
  
  (mediafinal>=5) ? printf("\nParabéns! Agora você está de férias e sua média final é: %.2f.",mediafinal) : 0; 
  (mediafinal<5&&mediafinal!=0) ? printf("\nInfelizmente, você reprovou no semestre, porque sua média final foi: %.2f",mediafinal) : 0;
  
  return 0;

}