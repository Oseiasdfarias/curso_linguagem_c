#include <stdio.h>

// Definindo uma estrutura
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
		struct pessoa p;
		printf("Digite o nome da rua da sua residência:\n");
		fgets(p.rua, 50, stdin);
		printf("Digite sua idade: \n");
		scanf("%d", &p.idade);
		getchar();
		printf("Digite o número da sua residência: \n");
		scanf("%d", &p.numero);
		getchar();
		printf("Digite seu nome: \n");
		fgets(p.nome, 50, stdin);

		printf("\nNome: %s", p.nome);
		printf("Rua: %s", p.rua);
		printf("Idade: %d", p.idade);
		printf("\nNúmero: %d\n\n", p.numero);

	return 0;
}
