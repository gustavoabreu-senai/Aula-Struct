#include <stdio.h>

struct Equipamentos{
	int codigo;
	char nome[50];
	int memoria;
	float preco;
};
	
int main(){
	struct Equipamentos pc = {
		101, "Notbook Dell" ,16, 3500.00f
	};
	printf("Codigo: %d\n", pc.codigo);
	printf("Nome: %s\n", pc.nome);
	printf("Memoria: %d\n", pc.memoria);
	printf("Preço: %.2f\n", pc.preco);
	return 0;
}
