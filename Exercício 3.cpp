#include <stdio.h>

	struct Cliente{
		int codigo;
		char nome[30];
		char cidade[50];
		int idade;		
	};

int main(){
	
	struct Cliente cliente1{
	301,"Ana Oliveira","Salvador",32

	};
	
	printf("Codigo: %d\n", cliente1.codigo);
	printf("Nome: %s\n", cliente1.nome);
	printf("Cidade: %s\n", cliente1.cidade);
	printf("Idade: %d\n", cliente1.idade);
	
	return 0;
}
