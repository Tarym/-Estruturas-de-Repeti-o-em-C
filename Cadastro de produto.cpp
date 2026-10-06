#include <stdio.h>
#include <locale.h>

int main() {
   
   setlocale(LC_ALL,"");
   int qtd, codigo; 
   float preco;
   
  printf("Digite quantidade de produtos para cadastro: ");
  scanf("%d",&qtd);
  
  for (int i = 1; i <= qtd; i++) {
  	
  	printf("\n´`´`´` Produto %d ---\n", i);
    printf("Codigo: ");
    scanf("%d", &codigo);
    printf("Preco: ");
    scanf("%f", &preco);

    printf("Cadastrado -> Codigo: %d | Preco: R$ %.2f\n", codigo, preco);
  	 }
  return 0;
  
}
