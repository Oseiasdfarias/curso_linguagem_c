#include <stdio.h>
#include <string.h>

struct pessoa{
	char nome[50]; 
	int idade;
};

void print_dados(char *nome, int idade){

	printf("\nNome: %s\n", nome);
	printf("Idade: %d\n", idade);

}

int main(){
	struct pessoa p1, p2;
	strcpy(p1.nome, "Ana Clara");
	p1.idade = 29;
	strcpy(p2.nome, "Oséias Dias de Farias");
	p1.idade = 27;
	
	// Passagem de campo de uma struct por valor
	print_dados(p1.nome, p1.idade);
	print_dados(p2.nome, p2.idade);
	printf("\n");

	return 0;
}
