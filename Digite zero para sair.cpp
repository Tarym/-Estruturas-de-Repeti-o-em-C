#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");

    int num;

 	printf("Digite um numero (0 para sair): ");
    scanf("%d", &num);

    while (num != 0) {
        printf("Digite outro numero (0 para sair): ");
        scanf("%d", &num);
    }

    printf("Programa encerrado.\n");
    return 0;
}
