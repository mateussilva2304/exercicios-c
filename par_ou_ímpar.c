#include <stdio.h>

int main(){
    int n;    //Declaração da variável.
    printf("**** Par ou ímpar ****\n");
    printf("Digite um número inteiro:   \n");    //Solicita ao usuário a entrada de dados.
    scanf("%d", &n);    //Atribui à variavel "n" o valor inserido.
    if(n%2==0){    //Operador condicional if verifica se o resto da divisão de n por 2 é 0.
        printf("O número %d é par.", n);   //Se o resto da divisão for 0 então n é par.
    }else{      //Se if não for verdadeiro então o programa segue pela outra opção.
        printf("O número %d é impar.", n);   //Se o resto da divisão for diferente de 0 então n é impar.
    }
    return 0;
}
