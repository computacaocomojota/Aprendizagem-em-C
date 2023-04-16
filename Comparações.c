#include <stdio.h>
#include <stdlib.h>
// strcmp(strg1, strg2)==0
int main(void){

  char player[256];
  char player2[256];

  printf("\nSejam bem-vindo ao Jogo Pedra, Papel ou Tesoura!\n");
  printf("\nPlayer 1, sua vez... Pedra, Papel ou Tesoura?\n");
  scanf("%s",player);

  printf("\nPlayer 2, sua vez... Pedra,Papel ou Tesoura?\n");
  scanf("%s",player2);

  printf("\n O Player 1 jogou %s e o Player 2 jogou %s\n",player,player2);

  printf("\nAguarde alguns segundos, estamos calculando o resultado...\n");
        
   if(strcmp(player,"Pedra")==0){
    
      if(strcmp(player2,"Papel")==0){
      printf("\nPlayer 2 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"Tesoura")==0){
      printf("\nPlayer 1 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else if(strcmp(player2,"Pedra")==0){
      printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"papel")==0){
        printf("\nPlayer 2 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"tesoura")==0){
        printf("\nPlayer 1 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else if(strcmp(player2,"pedra")==0){
        printf("\nHouve um EMPATE!\n");
    } else {
       printf("\nVocê jogou uma informação inválida! Digite novamente.\n");
  }
  } 

  if(strcmp(player,"Papel")==0){
    
      if(strcmp(player2,"Papel")==0){
      printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"Tesoura")==0){
      printf("\nPlayer 2 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"Pedra")==0){
      printf("\nPlayer 1 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"papel")==0){
        printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"tesoura")==0){
        printf("\nPlayer 2 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"pedra")==0){
        printf("\nPlayer 1 GANHOU! Porque o papel embrulha a pedra.\n");
    } else {
        printf("\nVocê jogou uma informação inválida! Digite novamente.\n");
  } 
  }

  if(strcmp(player,"Tesoura")==0){
    
      if(strcmp(player2,"Papel")==0){
      printf("\nPlayer 1 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"Tesoura")==0){
      printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"Pedra")==0){
      printf("\nPlayer 2 GANHOU! Porque a pedra amassa a tesoura.\n"); 
    } else if(strcmp(player2,"papel")==0){
        printf("\nPlayer 1 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"tesoura")==0){
        printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"pedra")==0){
        printf("\nPlayer 2 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else {
    printf("\nVocê jogou uma informação inválida! Digite novamente.\n"); 
  }
  }

  if(strcmp(player,"pedra")==0){
    
      if(strcmp(player2,"pedra")==0){
      printf("\nHouve um EMPATE!");
    } else if(strcmp(player2,"papel")==0){
      printf("\nPlayer 2 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"tesoura")==0){
      printf("\nPlayer 1 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else if(strcmp(player2,"Pedra")==0){
        printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"Papel")==0){
        printf("\nPlayer 2 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"Tesoura")==0){
        printf("\nPlayer 1 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else {
      printf("\nVocê jogou uma informação inválida! Digite novamente.\n");
  }
  }  
  
  if(strcmp(player,"papel")==0){
    
      if(strcmp(player2,"papel")==0){
      printf("\nHouve um EMPATE!");
    } else if(strcmp(player2,"pedra")==0){
      printf("\nPlayer 1 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"tesoura")==0){
      printf("\nPlayer 2 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"Papel")==0){
        printf("\nHouve um EMPATE!");
    } else if(strcmp(player2,"Pedra")==0){
        printf("\nPlayer 1 GANHOU! Porque o papel embrulha a pedra.\n");
    } else if(strcmp(player2,"Tesoura")==0){
        printf("\nPlayer 2 GANHOU! Porque a tesoura corta o papel.\n");
    } else {
      printf("\nVocê jogou uma informação inválida! Digite novamente.\n");
  }
  }

  if(strcmp(player,"tesoura")==0){
    
      if(strcmp(player2,"papel")==0){
      printf("\nPlayer 1 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"tesoura")==0){
      printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"pedra")==0){
      printf("\nPlayer 2 GANHOU! Porque a pedra amassa a tesoura.\n"); 
    } else if(strcmp(player2,"Papel")==0){
        printf("\nPlayer 1 GANHOU! Porque a tesoura corta o papel.\n");
    } else if(strcmp(player2,"Tesoura")==0){
        printf("\nHouve um EMPATE!\n");
    } else if(strcmp(player2,"Pedra")==0){
        printf("\nPlayer 2 GANHOU! Porque a pedra amassa a tesoura.\n");
    } else {
    printf("\nVocê jogou uma informação inválida! Digite novamente.\n"); 
  }
  }
  
  return 0;
}