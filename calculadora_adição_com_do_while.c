#include <stdio.h>

int main(){
    int n;     //Declaração da variável n.
    int soma = 0;    //Declaração da varíavel soma.
    printf("** Calculadora de Adição **\n");
    printf("Digite os números que deseja somar (0 exibe o total):   \n\n");  
    do{
        printf("Digite um número:   ");   //Pede a entrada de dados ao usuário.
        scanf("%d", &n);     //Atribui o valor inserido pelo usuário à variavel n.
        if (n!=0){     //Soma apenas se o número for diferente de 0.
            soma = soma + n;   //Acumula o valor digitado na variável soma.
        }
    
    }  while (n!=0);     //Continua repetindo enquanto n for diferente de 0.
    printf("A soma dos números digitados é: %d.\n", soma);

    return 0;
}
