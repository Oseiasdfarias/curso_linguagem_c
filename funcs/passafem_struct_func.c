#include <stdio.h>

struct ponto {
	int x, y, z;
};

void atribuir(struct ponto *p){
  // Operador (*p).x acessa a variável da struct
	(*p).x = 12;
	(*p).y = 42;
	(*p).z = (*p).x + (*p).y; 

}

void atribuir2(struct ponto *pt){
  // Operador pt -> x acessa a variável da struct
	pt -> x = 12;
	pt -> y = 42;
	pt -> z = pt -> x + pt -> y; 

}

	int main(){
		// Passagem de uma struct por referencia
		struct ponto p1, p2;

		atribuir(&p1);
		printf("\nValor de x: %d\n", p1.x);
		printf("Valor de y: %d\n", p1.y);
		printf("Valor de z: %d\n\n", p1.z);
	
		atribuir(&p2);
		printf("\nValor de x: %d\n", p2.x);
		printf("Valor de y: %d\n", p2.y);
		printf("Valor de z: %d\n\n", p2.z);


		return 0;
	}
