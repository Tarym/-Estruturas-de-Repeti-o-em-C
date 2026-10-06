#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int opcao;
    int tipo, prioridade;
    
    int totalAtendimentos = 0;
    int totalSoftware = 0;
    int totalHardware = 0;
    int totalRede = 0;
    int totalUrgentes = 0;

    do {
        printf("\n====================================\n");
        printf("     Serviço TI       \n");
        printf("====================================\n");
        printf("1 - Registrar Novo Atendimento\n");
        printf("0 - Encerrar Expediente e Ver Relatório\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n==== Registrar Atendimento ====\n");
                
                do {
                    printf("Tipo (1 - Software | 2 - Hardware | 3 - Rede): ");
                    scanf("%d", &tipo);
                    if (tipo < 1 || tipo > 3) {
                        printf("Tipo inválido! Tente novamente.\n");
                    }
                } while (tipo < 1 || tipo > 3);

                do {
                    printf("Prioridade (1 - Urgente | 2 - Prioritário | 3 - Normal): ");
                    scanf("%d", &prioridade);
                    if (prioridade < 1 || prioridade > 3) {
                        printf("Prioridade inválida! Tente novamente.\n");
                    }
                } while (prioridade < 1 || prioridade > 3);

               
                totalAtendimentos++;

                switch (tipo) {
                    case 1: 
                        totalSoftware++; 
                        break;
                    case 2: 
                        totalHardware++; 
                        break;
                    case 3: 
                        totalRede++; 
                        break;
                }

                if (prioridade == 1) {
                    totalUrgentes++;
                }

                printf("Atendimento registrado com sucesso!\n");
                break;

            case 0:
                printf("\nEncerrando expediente...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\n====================================\n");
    printf("   RELATÓRIO FINAL DE ATENDIMENTOS  \n");
    printf("====================================\n");
    printf("Total de atendimentos realizados: %d\n", totalAtendimentos);
    printf("=====================================\n");
    printf("Atendimentos por tipo:\n");
    printf("  - Software : %d\n", totalSoftware);
    printf("  - Hardware : %d\n", totalHardware);
    printf("  - Rede     : %d\n", totalRede);
   printf("=====================================\n");
    printf("Chamados urgentes registrados: %d\n", totalUrgentes);
    printf("====================================\n");

    return 0;
}
