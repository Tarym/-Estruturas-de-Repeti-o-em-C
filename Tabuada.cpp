#include <stdio.h>
#include <locale.h>

int main() {
   
   setlocale(LC_ALL,"");
   int num;
   
   printf("Digite o número para tabuada: ");
   scanf("%d", &num);
   
   for (int i = 1; i <= 10; i++) {
   	printf("%d x %d = %d\n",num, i, num * i);
   }
   return 0;
}
