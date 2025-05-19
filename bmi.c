#include<stdio.h>

int main()
{ //León Carrizo Nuñez
    float altura;
    float peso; 
    float imc;
    
     printf("Ingrese su altura en metros: \n");
      scanf("%f",&altura);
     printf("Ingrese su peso en kg: \n");
      scanf(" %f",&peso);
     imc = peso / (altura * altura);
     printf("Su índice de masa corporal es: %f \n\n", imc);
     printf("‭Índice| Condición‬\n-----------------------------‬\n<18.5 | Bajo peso‬\n18.5 a 24.9 | Normal‬\n25.0 a 29.9 | Sobrepeso‬\n>=30| Obesidad\n");
    return 0;
}