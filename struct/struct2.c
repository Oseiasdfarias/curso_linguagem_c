#include <stdio.h>
#include <string.h>

struct ponto{
	int x, y;
};

struct n_ponto{
	int x, y;
};

int main(){
	struct ponto p1, p2= {1, 3};
	struct n_ponto p3 = {4, 5};

	// Correto
	p1 = p2;
	printf("p1 = %d e %d\n", p1.x, p1.y);

	// Errado
	//p1 = p3;
	printf("p1 = %d e %d\n", p1.x, p1.y);

	return 0;
}
