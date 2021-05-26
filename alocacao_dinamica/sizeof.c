#include <stdio.h>

struct ponto{
	int x, y;
	char a, b;
};

int main(){

	printf("char: %lu\n", sizeof(char));
	printf("int: %lu\n", sizeof(int));
		printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));
	printf("struct: %lu\n", sizeof(struct ponto));

	return 0;
}
