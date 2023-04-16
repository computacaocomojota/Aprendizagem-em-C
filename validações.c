#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[256];
    int idade;

    printf("Qual o seu nome?\n");
    scanf("%s",&nome);
    
    printf("\nQue nome bonito! Qual a sua idade?\n");
    scanf("%d",&idade);

    
    printf("\nNome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");  

    printf("A primeira letra do seu nome é: %c",nome[0]); 
    

    if(idade>=18){
        printf("\nDe acordo com algumas pesquisas recentes,você se enconta na fase adulta!\n");
    }    else if(idade>=12){
        printf("\nDe acordo com algumas pesquisas recentes,você se enconta na fase da adolescência!\n");
    } else {
        printf("\nDe acordo com algumas pesquisas recentes,você é uma criança!\n");
    }
    
    
    return 0;
}