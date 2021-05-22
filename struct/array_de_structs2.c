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

	struct pessoa p[2];

	int i, j;
	for(i = 0; i < 2; i++){
	
		printf("Digite o nome da Pessoa: \n");
		fgets(p[i].nome, 50, stdin);
		printf("Digite a idade da Pessoa: \n");
		scanf("%d", &p[i].idade);
		getchar();
		printf("Digite o nome da rua onde ela mora: \n");
		fgets(p[i].rua, 50, stdin);
		printf("Digite o número da casa onde ela mora: \n");
		scanf("%d", &p[i].numero);
		getchar();
	
	}

	for(j = 0; j < 2; j++){
		printf("\nNome: %s", p[j].nome);
		printf("Idade: %d\n", p[j].idade);
		printf("Nome da Rua: %s", p[j].rua);
		printf("Número da Residência: %d\n\n", p[j].numero);
	}
	return 0;
}
