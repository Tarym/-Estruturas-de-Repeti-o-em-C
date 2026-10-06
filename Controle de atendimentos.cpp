#include <stdio.h>

int main() {
    int opcao;
    int software = 0, hardware = 0, rede = 0;

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Atendimentos (1 - Software | 2 - Hardware | 3 - Rede): ", i);
            scanf("%d", &opcao);
            if (opcao < 1 || opcao > 3) {
                printf("Opcao invalida! Digite 1, 2 ou 3.\n");
            }
        } while (opcao < 1 || opcao > 3);

        switch (opcao) {
            case 1: 
				software++; 
				break;
            case 2: 
				hardware++; 
				break;
            case 3: 
				rede++; 
				break;
        }
    }

    printf("\n==== Relatorio de atendimento ====\n");
    printf("Software: %d\n", software);
    printf("Hardware: %d\n", hardware);
    printf("Rede: %d\n", rede);
    printf("Total de atendimentos: %d\n", software + hardware + rede);

    return 0;
}
