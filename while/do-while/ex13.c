/*Escreva um programa que leia a idade de uma pessoa, aceitando apenas valores entre 0 e 130. 
Enquanto o valor for inválido, o programa deve exibir uma mensagem de erro e solicitar nova entrada. */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int idade;
    while(true){
        printf("Digite sua idade: ");
        scanf("%i", &idade);
        if(idade > 130 || idade < 0){
            printf("Idade inválida!!\n");
        }else{
            break;
        }
    }
    printf("Idade lida: %i\n", idade);
    return 0;
}