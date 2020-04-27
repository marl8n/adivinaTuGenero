#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include <time.h>
#include <string.h>

int main()
{
	int man = 0, woman = 0;
	char answer[10];

	printf("\tBienvenido! intentar%c adivinar tu genero basandome\n\ten una serie de preguntas de si o no\n\tEscribe si o no\n\t", 130);
	
	while (man < 6 && woman < 6)
	{
		srand(time(NULL));

		if((rand() % 2) == 0){
			menquestion();
			scanf("%s", answer);
			while ( strcmp(answer, "si") == 0 && strcmp(answer, "no") == 0);
			{
				printf("\n\tPor favor ingrese \"si\" o \"no\"\n");
				scanf("%s", answer);
			}
			
			if(strcmp(answer, "si") == 0){
				man++;
			}else
			{
				woman++;
			}
		}else
		{
			womanquestion();
			scanf("%s", answer);
			while ( strcmp(answer, "si") == 0 && strcmp(answer, "no") == 0);
			{
				printf("\n\tPor favor ingrese \"si\" o \"no\"\n");
				scanf("%s", answer);
			}
			if(strcmp(answer, "si") == 0){
				woman++;
			}else
			{
				man++;
			}
		}
	}

	return 0;
}
