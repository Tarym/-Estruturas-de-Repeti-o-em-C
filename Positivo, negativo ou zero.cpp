#include <stdio.h>
#include <locale.h>
int main() {
  
	int num;
	setlocale(LC_ALL,"");
    for (int i = 1; i <= 10; i++) {
        printf("Digite o número: ", i);
        scanf("%d", &num);

        if (num > 0) {
            printf("Positivo\n");
        } else if (num < 0) {
            printf("Negativo\n");
        } else {
            printf("Zero\n");
        }
    }
    return 0;
}
