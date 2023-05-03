#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num1, num2, resta=0;
	
	printf("ingrese num1");
	scanf("%d", &num1);
	printf("Ingrese num2");
	scanf("%d", &num2);
	resta=num1-num2;
	if(resta>=50)
	printf("Aprobado");
	else
	printf("Reprobado");
	

}
