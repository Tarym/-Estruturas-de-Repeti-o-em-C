#include <stdio.h>
#include <locale.h>

int main() {
    int status;
    int funcionando = 0, defeito = 0;
	setlocale(LC_ALL, "");

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Computador %d (1 - Funcionando | 0 - Com defeito): ", i);
            scanf("%d", &status);
            if (status != 0 && status != 1) {
                printf("Valor invalido! Digite apenas 0 ou 1.\n");
            }
        } while (status != 0 && status != 1);

        if (status == 1) {
            funcionando++;
        } else {
            defeito++;
        }
    }

    printf("\n==== Resultado ====\n");
    printf("Computadores funcionando: %d\n", funcionando);
    printf("Computadores com defeito: %d\n", defeito);

    return 0;
}
