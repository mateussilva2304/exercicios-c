#include <stdio.h>


int maior(int a, int b){         //Função que recebe dois números inteiros e retorna o maior entre eles.
    if (a > b){
        return a;  //Retorna 'a' se for maior.
    }else{
        return b;   //Retorna 'b' caso contrário; 
    }
}

int main(){
    int x, y;    
    scanf("%d%d", &x, &y);     //Lê dois números digitados pelo usuário.
    printf("O maior número entre %d e %d é: %d\n", x, y, maior(x,y));     //Exibe o maior número entre x e y.
                                                                   //A função 'maior' é chamada diretamente no printf.


    return 0;
}
