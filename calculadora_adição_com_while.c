#include <stdio.h>

int main(){
    int n;   //Declaração da variável n.
    int soma = 0; //Declaração da varíavel soma.
    printf("** Calculadora de Adição **\n");
    printf("Digite os números que deseja somar (0 exibe o total):   \n");  
    while (1){      //O 1 dentro do parêntesis mostra que o while sempre será verdadeiro até que encontre um break.
        printf("Digite um número:   ");   //Pede a entrada de dados ao usuário.
        scanf("%d", &n);   //Atribui o valor inserido pelo usuário à variavel n.
        
        if (n == 0){      //Operador condicional if garante que o loop seja encerrado quando o usuário digitar 0, utilizando o break.
            break;
        }
        soma = soma + n;   //Acumula o valor digitado na variável soma.
    }
    printf("A soma dos números digitados é %d.\n", soma);   //Exibe na tela o resultado final da soma.

    return 0;
}

