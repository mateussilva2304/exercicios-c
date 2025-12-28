#include <stdio.h>

int main(){
    int n1, n2, soma, sub, mult, divi, resto;   //Declaração das variáveis.
    printf("***** Operações Aritméticas *****\n");
    printf("*Digite o primeiro número:   \n");   //Solicita ao usuário a entrada dos dados.
    scanf("%d", &n1);   //Atribui à variável n1 o valor inserido.
    printf("*Digite o segundo número:   \n");   //Solicita novamente a entrada dos dados.
    scanf("%d", &n2);   //Atribui à variavel n2 o valor inserido.
    soma = n1+n2;   
    sub = n1-n2;
    mult = n1*n2;
    //Realiza as operações aritmeticas das variáveis.
    printf("A soma de %d e %d é %d.\n", n1, n2, soma);   //Saída de dados, resultado da soma.
    printf("Se subtrairmos %d de %d o resultado é %d.\n", n2, n1, sub);   //Saída de dados, resultado da subtração
    printf("Se multiplicarmos %d por %d teremos %d como resposta.\n", n1, n2, mult);   //Saída de dados, resultado da multiplicação.
    if(n2!=0){       //Se certifica se o segundo número não é 0, evitando erro.
    divi = n1/n2;    //Realiza a divisão de n1 e n2.
    resto=n1%n2;    //Calcula o resto da divisão de n1 e n2.
    printf("Se dividirmos %d por %d teremos %d como quociente e %d como resto.\n", n1, n2, divi, resto);
        
    }else{
                 //Saída de dados, resultado da divisão de n1 por n2.
        printf("Não é possível dividir %d por 0.\n", n1);
        //Se o segundo número inserido pelo usuário for 0 é exibida essa mensagem na tela.
    }

    return 0;
}
