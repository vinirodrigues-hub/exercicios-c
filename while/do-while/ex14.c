/*Escreva um programa que exiba o menu abaixo e solicite a escolha do usuário. Enquanto a opção for 
inválida, o menu deve ser reexibido. Quando válida, exiba a opção escolhida. 
[1] Cadastrar 
[2] Consultar 
[3] Sair */

#include <stdio.h>

int main() {
    int escolha;
    do{
        printf("--- Menu ---\n");
        printf("[1] Cadastrar\n");
        printf("[2] Consultar\n");
        printf("[3] Sair\n");
        printf("Digite sua escolha: ");
        scanf("%i", &escolha);
        if(escolha == 1){
            printf("Cadastro feito!");
        }else if(escolha == 2){
            printf("Oq deseja consultar?");
        }else if(escolha == 3){
            printf("Saindo...");
        }else{
            printf("Opção inválida! Tente novamente\n");
        }
    }while(escolha < 1 || escolha > 3);
    
    return 0;  
}
   
    
