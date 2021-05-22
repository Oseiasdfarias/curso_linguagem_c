#include <stdio.h>
#include <string.h>

struct pessoa{
	// arrays do tipo char para armazena o nome da pessoa e
	// da rua onde ela mora
	char nome[50], rua[50];

	// campos do tipo int para armazenar dados da idade
	// e numero da residência da pessoa
	int idade, numero;
};

int main(){
	struct pessoa p[4];
	p[0].idade = 27;
	strcpy(p[1].nome, "Ana");
	p[2].numero = p[0].numero - 1;

	printf("%s\n", p[1].nome);
	printf("%d\n", p[0].idade);

	return 0;
}
