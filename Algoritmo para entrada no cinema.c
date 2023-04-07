#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horario_atual = 20;
	int horario_cinema = 20;
	int horario_maximo = (horario_cinema +30);
	int horario_minimo = (horario_cinema -30);
	
	if(horario_atual > horario_maximo){
		printf("Nao pode entrar! Passou do horario.");
	} else if(horario_atual < horario_minimo){
		printf("A porta da sala da sessao ainda esta fechada");
	} else {
		printf("Pode entrar!Aproveite o filme.");
	}
	
	return 0;
}
