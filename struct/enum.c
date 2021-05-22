#include <stdio.h>

enum semana{
	Domingo, Segunda, Terça,
	Quarta, Quinta, Sexta, Sabado
};

int main(){

	enum semana s, e;
	s = Segunda;
	e = Terça;

	printf("Valor = %d\n", s);
	printf("Valor = %d\n", e);

	return 0;
}
