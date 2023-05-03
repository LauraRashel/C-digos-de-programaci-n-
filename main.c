#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char name[10];
	float num1, num2, num3, num4, num5, prom;
	printf("Cual es el name del estudiante:");
	scanf("%c",&name);
	printf("Digite 5 notas del estudiante");
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);
	scanf("%f", &num4);
	scanf("%f", &num5);
	prom= num1+num2+num3+num4+num5/5.0;
	printf("El name del estudiante es: %c", name);
	printf("El promedio de las notas es: %f2", prom);
	
	return 0;
	
	
	

}
