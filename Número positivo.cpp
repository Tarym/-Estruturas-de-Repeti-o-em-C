#include <stdio.h>
#include <locale.h>

int main(){
	
	int num;
	setlocale(LC_ALL, "");
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	while ( num < 0 ) {
		printf("Número invalido. Digite novamente: ");
		scanf("%d", &num);
	}
	printf("Número valido recebido: %d\n", num);
	
}
