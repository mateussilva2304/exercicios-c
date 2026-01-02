#include <stdio.h>

int soma(int a, int b){
    return a + b;    //Retorna a soma dos dois parâmetros.
}


int main(){
    int a, b, resultado;   //Declaração das variáveis.
    printf("Digite um número para a soma:\n");   //Entrada de dados solicitdada ao usuário.
    scanf("%d", &a);         //Atribui os dados inseridos pelo usuário à variável a.
    printf("Digite o segundo número:\n");      //Nova solicitação de entrada de dados ao usuário.
    scanf("%d", &b);       //Atrubui os dados inseridos pelo usuário à variável b.
    printf("O resultado da soma é %d.", soma (a, b));       //A função soma() é chamada e imprime o valor retornado.
    

    return 0;
}
