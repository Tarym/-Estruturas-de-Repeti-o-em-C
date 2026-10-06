#include <stdio.h>
#include <locale.h>

int main() {
    float valor, totalVendido = 0.0;
	setlocale(LC_ALL, "");
	
    for (int i = 1; i <= 5; i++) {
        printf("Digite o valor da venda %d: R$ ", i);
        scanf("%f", &valor);
        totalVendido += valor;
    }
    printf("\nTotal vendido: R$ %.2f\n", totalVendido);
    printf("Media das vendas: R$ %.2f\n", totalVendido / 5.0);

    return 0;
}
