#include <stdio.h>
#include <locale.h>

int main() {
   
   setlocale(LC_ALL,"");
   int qtd;
   float nota;
   
   printf("Digite quantidade de alunos: ");
   scanf("%d",&qtd);
   
   for (int i = 1; i <= qtd; i++) {
   	
   	printf("Digite nota do estudante: \n");
   	scanf("%f",&nota);
   	
   	printf("Nota registrada: %.1f\n",nota);
   	if (nota >= 7) {
   		printf("Nota menor ou igual a 7\n");
	   }
	   else {
	   	printf("Nota menor que 7\n");
	   }
   }
   
   
   
  return 0;
  
}
