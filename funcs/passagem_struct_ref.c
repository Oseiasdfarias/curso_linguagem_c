#include <stdio.h>
#include <string.h>

struct pessoa{
	char nome[50]; 
	int idade;
};

void print_dados(char *nome, int *idade){
	
	printf("Digite seu nome: ");
	fgets(nome, 50, stdin);
	printf("Digite sua Idade: ");
	scanf("%d", idade);
	getchar();

	printf("\nNome: %s", nome);
	printf("Idade: %d\n", *idade);

}

int main(){

	struct pessoa p1;
	strcpy(p1.nome, "Marta Pereira");
	p1.idade = 34;

	printf("\nNome: %s\n", p1.nome);
	printf("Idade: %d\n\n", p1.idade);

	// Passagem de campo de struct por referência
	print_dados(p1.nome, &p1.idade);

	printf("\nNome: %s", p1.nome);
	printf("Idade: %d\n\n", p1.idade);

	return 0;
}
