#include <stdio.h>

// Definindo uma estrutura
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
		struct pessoa p;
		printf("Digite o nome da rua da sua residência:\n");
		scanf("%s", p.rua);
		printf("Digite sua idade: \n");
		scanf("%d", &p.idade);
		printf("Digite o número da sua residência: \n");
		scanf("%d", &p.numero);
		printf("Digite seu nome: \n");
		scanf("%s", p.nome);

		printf("\nNome: %s", p.nome);
		printf("\nRua: %s", p.rua);
		printf("\nIdade: %d", p.idade);
		printf("\nNúmero: %d\n", p.numero);

	return 0;
}
