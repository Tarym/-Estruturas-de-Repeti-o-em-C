#include <stdio.h>
#include <locale.h>

int main(){
	
	int idade;
	setlocale(LC_ALL, "");

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Idade invalida. Tente novamente.\n");
        }
    } while (idade < 0);

    printf("Idade registrada com sucesso: %d\n", idade);
    return 0;
}

