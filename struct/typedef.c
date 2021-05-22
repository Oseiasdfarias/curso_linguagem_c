#include <stdio.h>
#include <string.h>

struct cadastro{
	char nome[50], rua[50];
	int idade , numero;
};
typedef struct cadastro cad;

int main(){
	// Declarando uma struct da forma normal
	struct cadastro c;
	// Declarando uma struct usando typedef
	cad ca;

	strcpy(ca.nome, "ana");
	strcpy(c.nome, "Ana");
	
	printf("Nome: %s\n", ca.nome);
	printf("Nome: %s\n", c.nome);
	return 0;
}
