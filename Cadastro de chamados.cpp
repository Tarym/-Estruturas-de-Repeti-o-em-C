#include <stdio.h>
#include <locale.h>

int main(){
	
	int total, codigo, prioridade;
	setlocale(LC_ALL, "");

    printf("Quantos deseja cadastrar? ");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++) {
        printf("Codigo do chamado: ");
        scanf("%d", &codigo);

        do {
            printf("(1 - Urgente | 2 - Prioritario | 3 - Normal): ");
            scanf("%d", &prioridade);
            if (prioridade < 1 || prioridade > 3) {
                printf("Prioridade invalida! Tente novamente.\n");
            }
        } while (prioridade < 1 || prioridade > 3);

        printf("\n====================\n");
        printf("Chamado de cadastros \n");
        printf("====================\n");
        printf("Codigo: %d\n", codigo);
        printf("Prioridade: ");
        if (prioridade == 1) {
            printf("Urgente\n");
        } else if (prioridade == 2) {
            printf("Prioritario\n");
        } else {
            printf("Normal\n");
        }
    }
    return 0;
}
