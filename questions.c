#include "questions.h"

void question()
{
	char * mensq[10] = {"a","b","c","d","e","f","g","h","i","j"}
	char * womensq[10] = {"1","2","3","4","5","6","7","8","9","10"}
	int defineq, qdirectory;
	defineq = rand();
	qdirectory = rand() % 9;
	printf("\n%d\n", defineq);
	printf("\n%d\n", qdirectory);
	do{
		if((defineq % 2) == 0){
			printf("%s", mensq[qdirectory]);
		}else{
			printf("%S", womensq[qdirectory]);
		}
	}
}
