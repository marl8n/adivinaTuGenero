#include "questions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menquestion()
{
	char mensq[][80] = {"aa","bb","cc","dd","ee","ff","gg","hh","ii","jj"};
	int defineq, qdirectory;
	srand(time(NULL));
	defineq = rand();
	qdirectory = rand() % 9;
	printf("%s", mensq[qdirectory]);
}

void womanquestion()
{
	char womensq[][80] = {"11","22","33","44","55","66","77","88","99","10"};
	int defineq, qdirectory;
	srand(time(NULL));
	defineq = rand();
	qdirectory = rand() % 9;
	printf("%s", womensq[qdirectory]);
}