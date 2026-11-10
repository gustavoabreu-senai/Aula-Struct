#include <stdio.h>

struct Computador{
	int codigo;
	char marca[30];
	int memoriaRAM;
	int armazenamento;
	float preco;		
	};

int main(){
	
	struct Computador computador1{
	201, "Dell", 16 , 512 ,3500.00

	};
	
	struct Computador computador2{
	302, "AOC", 8, 280, 2500.00

	};
	
	printf("Codigo: %d\n", computador1.codigo);
	printf("Marca: %s\n", computador1.marca);
	printf("Memoria RAM: %d\n", computador1.memoriaRAM);
	printf("Armazenamento: %d\n", computador1.armazenamento);
	printf("Preço: %.2f\n", computador1.preco);
	
	printf("\nCodigo: %d\n", computador2.codigo);
	printf("Marca: %s\n", computador2.marca);
	printf("Memoria RAM: %d\n", computador2.memoriaRAM);
	printf("Armazenamento: %d\n", computador2.armazenamento);
	printf("Preço: %.2f\n", computador2.preco);
	
	return 0;
}
