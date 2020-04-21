#include <stdio.h>
#include <stdlib.h>
//#include "questions.h"

void pregunta_w(){
	char preguntillas[20];
}

void pregunta_m(){
	char preguntillas[20];
}

int main()
{
	int man = 0;
	int woman = 0;
	int question[10];
	int number_question [10];
	char answer[10];

	printf("\tBienvenido! intentar%c adivinar tu genero basandome\n\ten una serie de preguntas de si o no\n\tEscribe 1 si tu respuesta es s%c\n\tEscribe 0 si tu respuesta es no.\n", 130, 161);
	while (man <= 6 && woman <= 6);
	{
		for( int i = 0; i < 10; i++){
			question[i] = ( rand() % 1 );
		}
		for( int i = 0; i < 10; i++){
			printf( "%d", question[i]);
		}
	//	questions();
		scanf("%s", &answer);
	}
	return 0;
}
