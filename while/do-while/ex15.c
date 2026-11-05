/*Escreva um programa que leia dois números e exiba a divisão do primeiro pelo segundo. Caso o 
segundo número seja zero, o programa deve solicitar um novo valor para o divisor até que ele seja 
diferente de zero.*/

#include <stdio.h>

int main() {
    int num1, num2;
    float divisao;

    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite outro número: ");
    scanf("%i", &num2);

    while(num2 == 0){

        printf("Divisão por 0! Digite outro número.\n");
        printf("Digite outro número: ");
        scanf("%i", &num2);
      
    }
    divisao = (float) num1 /num2;
    printf("Divisão feita: %i / %i = %.2f", num1, num2, divisao);
    return 0;  
}