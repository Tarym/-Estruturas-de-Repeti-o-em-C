#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");

   int senha;
   
   printf("Digite senha: ");
   scanf("%d", &senha);
   
   while (senha != 1234) {
   	printf("Senha incorreta. Digite novamnete: ");
   	scanf("%d", &senha);
   	}
   	
   	printf("Acesso permitido.\n");
   
   
   
    return 0;
}
