#include<stdio.h>

int main()
{ //Leon Carrizo Nuñez
float altura, peso, imc;

	printf("Ingrese su altura en metros: \n");
      	scanf("%f",&altura);

	while (altura <= 0) {
		printf("ERROR. Ingrese una altura mayor que cero: ");
		scanf("%f", &altura);
	}
	printf("Ingrese su peso en kg: \n");
      	scanf(" %f",&peso);

	while (peso <= 0) {
		printf("ERROR. Ingrese un peso mayor que cero: ");
		scanf("%f", &peso);
	}
     	imc = peso / (altura * altura);
	printf("Su indice de masa corporal es: %f \n\n", imc);
      	printf("Indice| Condicion\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad\n");
    
		if (imc >= 30)
		{
			printf("Su condicion es: Obesidad");
		}
		else if (imc < 30 && imc >= 25)
		{
			printf("Su condicion es: Sobrepeso");
		}
		else if (imc < 25 && imc >= 18.5)
		{
			printf("Su condicion es: Normal");
		}
		else
		{
			printf("Su condicion es: Bajo peso");
		}
return 0;
}
