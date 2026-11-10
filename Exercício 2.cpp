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
	201, "Dell", 16 , 512 ,3500.00f

	};
	
	printf("Codigo: %d\n", computador1.codigo);
	printf("Marca: %s\n", computador1.marca);
	printf("Memoria RAM: %d\n", computador1.memoriaRAM);
	printf("Armazenamento: %d\n", computador1.armazenamento);
	printf("Preço: %.2f\n", computador1.preco);
	
	return 0;
}
