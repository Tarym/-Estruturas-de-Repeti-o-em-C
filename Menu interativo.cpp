#include <stdio.h>
#include <locale.h>

int main(){
	
	int opcao;
	setlocale(LC_ALL, "");
	
do{
	printf("=====================\n");
	printf("==== Menu ====\n");
	printf("=====================\n");
	printf(" 1 - Cadastrar\n ");
	printf(" 2 - Consultar\n ");
	printf(" 3 - Relatorio\n ");
	printf(" 0 - Sair\n ");
	printf("=====================\n");
	printf("Escolha opção: \n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Opção de Cadastrar selecionada.\n");
			break;
		case 2: 
			printf("Opção de Consultar selecionada.\n");
			break;
		case 3: 
			printf("Opção de Relatorio selecionada.\n");
			break;
		case 0:
			printf("Programa finalizado");
			break;
		default:
			printf("Opção invalida. Digite os números acima");
	}

	}
	while (opcao != 0);
	
	return 0;
}
