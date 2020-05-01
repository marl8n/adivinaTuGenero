#include "questions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menquestion()
{
	char menswq[][80] = {"\n\tTe gustan los deportes de contacto?\n\t","\n\tTe gustaria ser como cr7 o messi?\n\t","\n\tprefieres ver un partido de tu equipo favorito antes que ver una serie?\n\t","\n\tPrefieres los gameplays sobre los tutoriales de belleza?","\n\tTe afeitas?","\n\tTe gustaria tener una buena barba?","\n\tTienes el cabello regularmente corto?","\n\tHas besado a una mujer en la boca?","\n\tTe has enamorado de una mujer?","\n\tTe gustaria estar super fuerte y con el abdomen marcado?\n\t"};
	int qdirectory = 0;
	//srand(time(NULL));
	//qdirectory = rand() % 9;
	qdirectory++;
	printf("%s", mensq[qdirectory]);
}

void womanquestion()
{
	char womensq[][80] = {"\n\tTe casarias con un vestido blanco?\n\t","\n\tSi tuvieses un bebe lo amamantarias?\n\t","\n\tUtlizarias un bolso de mano?\n\t","\n\tHas utilizado tacones en publico?\n\t","\n\tUtilizarias lapiz labial?\n\t","\n\tTe pintarias las unas?\n\t","\n\tHas utilizado un top?\n\t","\n\tHas hablado del chico que te gusta con tu mejor amiga?\n\t","\n\tPrefieres ver tu serie favorita antes que un partido de tu equipo favorito?\n\t","\n\tTe gusta usar maquillaje?\n\t"};
	int qdirectory = 0;
	//srand(time(NULL));
	//qdirectory = rand() % 9;
	qdirectory++;
	printf("%s", womensq[qdirectory]);
}