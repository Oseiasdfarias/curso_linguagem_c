#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p, *p1;
	p1 = malloc(5 * sizeof(int));
	p = realloc(NULL, 20 * sizeof(int));
	p1 = realloc(p1, 10 * sizeof(int));

}
