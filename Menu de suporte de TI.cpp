#include <stdio.h>
#include <locale.h>

int main(){
	
	int opcao;
	setlocale(LC_ALL, "");
	
do{
	printf("=====================\n");
	printf("==== Menu ====\n");
	printf("=====================\n");
	printf(" 1 - Software\n ");
	printf(" 2 - Hardware\n ");
	printf(" 3 - Rede\n ");
	printf(" 0 - Sair\n ");
	printf("=====================\n");
	printf("Escolha opção: \n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Suporte de Software selecionada.\n");
			break;
		case 2: 
			printf("Suporte de Hardware selecionada.\n");
			break;
		case 3: 
			printf("Suporte de Rede selecionada.\n");
			break;
		case 0:
			printf("Encerrar suporte");
			break;
		default:
			printf("Opção invalida. Digite os números acima");
	}

	}
	while (opcao != 0);
	
	return 0;
}
