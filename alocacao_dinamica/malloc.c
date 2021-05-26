#include <stdio.h>
#include <stdlib.h>

int main(){

	int *v = (int*) malloc(200);
	char *c = (char*) malloc(50);
	
	int *v1 = (int*) malloc(50 * sizeof(int));
	char *c1 = (char*) malloc(50 * sizeof(char));

	return 0;
}
