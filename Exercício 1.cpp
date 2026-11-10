#include <stdio.h>

	struct Funcionarios{
		int matricula;
		char nome[50];
		int idade;
		float salario;		
	};

int main(){
	
	struct Funcionarios funcionario1{
		1001,"Carlos Silva",28,2500.00f
	};
	
	printf("Matricula: %d\n", funcionario1.matricula);
	printf("Nome: %s\n", funcionario1.nome);
	printf("Idade: %d\n", funcionario1.idade);
	printf("Salario: %.2f\n", funcionario1.salario);
	
	return 0;
}
