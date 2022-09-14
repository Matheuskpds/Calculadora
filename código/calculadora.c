#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int result;

int main(){
    int operator;
    int result;
    operators_menu();
    scanf("%d", &operator);
    printf("%d\n", calculator(operator));
    while(operator!=0){
        operators_menu();
        scanf("%d", &operator);
        printf("%d\n", calculator(operator));
    }
    return 0;
}


int calculator(int operator){
    switch (operator)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            pow();
            break;
        case 6:
            factorial();
            break;
        case 7:
            modulus();
            break;
        case 8:
            squareroot();
            break;  
        default:
            printf("Operador não encontrado\n");
            break;
    }
}

void operators_menu(){
    printf("[1] - soma\n");
    printf("[2] - subtração\n");
    printf("[3] - multiplicação\n");
    printf("[4] - divisão\n");
    printf("[5] - potencia\n");
    printf("[6] - fatorial\n");
    printf("[7] - módulo(resto da divisão)\n");
    printf("[8] - raiz quadrada\n");
    printf("[0] - Encerrar Programa\n");
}

int addition(){
    int a, b;
    printf("Digite dois numeros para serem somados: \n");
    scanf("%d %d", &a, &b);
    return a + b;
}

int subtraction(){
    int a, b;
    printf("Digite dois numeros que voce quer subtrair: \n");
    scanf("%d %d", &a, &b);
    return a - b;
}

int multiplication(){
    printf("Digite dois numeros que voce quer multiplicar: \n");
    int a,b;
    scanf("%d %d", &a, &b);
    return a * b;
}

float division(){
    printf("Digite os dois numeros que voce quer dividir: \n");
    float a,b;
    scanf("%f %f", &a, &b);
    float result;
    result = a/b; 
    return result;
}

int pow(){
    printf("Digite a base e o expoente: \n");
    int a,b;
    scanf("%d %d", &a, &b);
    int i;
    result = a;
    for(i=1; i<=b; i++){
        result = result * a;
    }
    return result;
}

int factorial(){
    printf("Digite o numero que voce quer o fatorial: \n");
    int a, i;
    result = 1;
    for(i=1;i<=a;i++){
        result = result * i;
    }
    return result;
}

int modulus(){
    printf("Digite dois numeros para ver o resto da divisao: \n");
    int a,b;
    scanf("%d %d", &a, &b);
    result = a % b;
    return result;
}

int squareroot(){
    double x;
    printf("Digite o numero que voce quer ver a raiz quadrada: \n");
    scanf("%l", &x);
    result = sqrt(x);
    return result;
}