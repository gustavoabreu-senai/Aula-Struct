#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TOTAL 5
#define TAM_NOME 50

typedef struct{
	int codigo;
	char nome[TAM_NOME];
	int memoria;
}Equipamento;

void limparEntrada(){

	int c;
	while((c = getchar()) != '\n' && c != EOF) {
	
	}
}

int lerInteiro(const char mensagem[], int *valor){
	printf("%s", mensagem);
	
	if (scanf("%d", valor) != 1){
		limparEntrada();
		return 0;
	}
	limparEntrada();
	return 1;
}

int pesquisarPorCodigo(
	const Equipamento equipamentos[],
	int quantidade, codigo
){
	for(int = 0; i < quantidade; i++){
		if (equipamentos[i].codigo == codigo){
			return i;
		}
	}
		return -1;
}

int cadastra(
	Equipamentos equipamentos[],
	int quantidade
){
	if(quantidade >= TOTAL){
		printf("\nLimite de equipamentos atingido!")
		return quantidade;
	}
	Equipamento novo;
	
	printf("\n--- CADASTRAR EQUIPAMENTO ---");
}

int main(){
	
	setlocale(LC_ALL, "");
	
	
	
	
	
	
	return 0;
}
