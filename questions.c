#include "questions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menquestion()
{
	char * mensq[10] = {"aa","bb","cc","dd","ee","ff","gg","hh","ii","jj"};
	int defineq, qdirectory;
	srand(time(NULL));
	defineq = rand();
	qdirectory = rand() % 9;
	printf("%s", menquestion[qdirectory]);
}

void womanquestion()
{
	char * womensq[10] = {"11","22","33","44","55","66","77","88","99","10"};
	int defineq, qdirectory;
	srand(time(NULL));
	defineq = rand();
	qdirectory = rand() % 9;
	printf("%s", menquestion[qdirectory]);
}