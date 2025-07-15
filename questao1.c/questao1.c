#include <stdio.h>

int main(){

    int a = 0,b = 0;
    
    printf("Informe um número: ");
    scanf("%d", &a);
    
    printf("\nInforme outro número para ser somado: ");
    scanf("%d", &b);

    int soma = a+b;

    printf("\nA soma dos números é: %d \n", soma);



    return 0;


}