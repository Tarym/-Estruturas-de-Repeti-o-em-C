#include <stdio.h>
#include <locale.h>

int main(){
	
    int total, codigo, tipo, prioridade;
	setlocale(LC_ALL, "");
	
    printf("Quantos chamados deseja cadastrar? ");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++) {
        printf("\n--- Chamado %d ---\n", i);
        printf("Codigo do chamado: ");
        scanf("%d", &codigo);

        do {
            printf("Tipo (1 - Software | 2 - Hardware | 3 - Rede): ");
            scanf("%d", &tipo);
            if (tipo < 1 || tipo > 3) {
                printf("Tipo invalido! Tente novamente.\n");
            }
        } while (tipo < 1 || tipo > 3);

        do {
            printf("(1 - Urgente | 2 - Prioritario | 3 - Normal): ");
            scanf("%d", &prioridade);
            if (prioridade < 1 || prioridade > 3) {
                printf("Prioridade invalida! Tente novamente.\n");
            }
        } while (prioridade < 1 || prioridade > 3);

        printf("\n====================\n");
        printf(" Chamado de cadastros \n");
        printf("====================\n");
        printf("Codigo: %d\n", codigo);

        printf("Tipo: ");
        switch (tipo) {
            case 1: 
				printf("Software\n"); 
				break;
            case 2: 
				printf("Hardware\n"); 
				break;
            case 3: 
				printf("Rede\n"); 
				break;
			default:
				printf("Opção invalida. Digite opção correta.");
        }

        printf("Prioridade: ");
        if (prioridade == 1) printf("Urgente\n");
        else if (prioridade == 2) printf("Prioritario\n");
        else printf("Normal\n");
    }
    return 0;
}
