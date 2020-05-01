#include <stdio.h>
#include <stdlib.h>
//#include "questions.h"
#include <time.h>
#include <string.h>

int main()
{
	int man = 0, woman = 0;
	int qdirectory = 0;


	char answer[10];
	char mensq[][80] = {"\n\tTe gustan los deportes de contacto?\n\t","\n\tTe gustaria ser como cr7 o messi?\n\t","\n\tprefieres ver un partido de tu equipo favorito antes que ver una serie?\n\t","\n\tPrefieres los gameplays sobre los tutoriales de belleza?\n\t","\n\tTe afeitas?\n\t","\n\tTe gustaria tener una buena barba?\n\t","\n\tTienes el cabello regularmente corto?\n\t","\n\tHas besado a una mujer en la boca?\n","\n\tTe has enamorado de una mujer?\n","\n\tTe gustaria estar super fuerte y con el abdomen marcado?\n\t"};
	char womensq[][80] = {"\n\tTe casarias con un vestido blanco?\n\t","\n\tSi tuvieses un bebe lo amamantarias?\n\t","\n\tUtlizarias un bolso de mano?\n\t","\n\tHas utilizado tacones en publico?\n\t","\n\tUtilizarias lapiz labial?\n\t","\n\tTe pintarias las unas?\n\t","\n\tHas utilizado un top?\n\t","\n\tHas hablado del chico que te gusta con tu mejor amiga?\n\t","\n\tPrefieres ver tu serie favorita antes que un partido de tu equipo favorito?\n\t","\n\tTe gusta usar maquillaje?\n\t"};


	printf("\tBienvenido! intentar%c adivinar tu genero basandome\n\ten una serie de preguntas de si o no\n\t\n\t", 130);
	
	while (man < 6 && woman < 6)
	{
		srand(time(NULL));

		if((rand() % 2) == 0){
			//menquestion();
			printf("%s", mensq[qdirectory]);

			scanf("%s", answer);
			while (strcmp(answer, "no") != 0 && strcmp(answer, "si") != 0)
			{
				printf("\n\tValor incorrecto, por favor escriba si o no\n\t");
				scanf("%9s", answer);
			}
			if(strcmp(answer, "si") == 0)
			{
				man++;
			}else{
				woman++;
			}		
			
		}else
		{
			//womanquestion();
			printf("%s", womensq[qdirectory]);
			scanf("%s", answer);
			while (strcmp(answer, "no") != 0 && strcmp(answer, "si") != 0)
			{
				printf("\n\tValor incorrecto, por favor escriba si o no\n\t");
				scanf("%9s", answer);
			}
			if(strcmp(answer, "si") == 0){
				woman++;
			}else{
				man++;
			}
		}
	qdirectory++;
	}
	if(man > woman)
	{
		printf("\n\tUsted es un hombre\n");
	}else if(woman > man)
	{
		printf("\n\tusted es mujer\n");
	}else
	{
		printf("\n\tIndefinido, por favor vuelva a intentar\n");
	}

	return 0;
}
