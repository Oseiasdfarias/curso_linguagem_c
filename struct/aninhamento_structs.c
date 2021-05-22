#include <stdio.h>

struct pessoa{

	char nome[50];
	int idade;

};
struct dados_geral{
	char rua[50];
	int numero;
	struct pessoa p;
};

int main(){
	struct dados_geral d;
	
	printf("Digite seu nome: \n");
	fgets(d.p.nome, 50, stdin);

	printf("Digite sua idade: \n");
	scanf("%d", &d.p.idade);
	getchar();
	
	printf("Digite sua rua: \n");
	fgets(d.rua, 50, stdin);
	
	printf("Digite o número da sua residência: \n");
	scanf("%d", &d.numero);
	getchar();

	printf("\n");	
	printf("Nome: %s", d.p.nome);
	printf("Idade: %d\n", d.p.idade);
	printf("Rua: %s", d.rua);
	printf("Número Residência: %d\n", d.numero);
	printf("\n");	

	return 0;
}
