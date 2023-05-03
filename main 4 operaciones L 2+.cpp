#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	int opcion;
	
	printf("Selecciona una opcion:\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	scanf("%, &opcion");
	
	
	if(opcion==1) {
		int num1, num2, resultado;
        printf("Introduce el primer numero: ");
        scanf( "%d", &num1);
        printf("Introduce el segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 + num2;
        printf("El resultado de la suma es: %d\n", resultado);
    }   else if(opcion==2){
    	int num1, num2, resultado;
    	printf("Introduce el primer numero: ");
    	scanf("%d", &num1);
    	printf("Introduce el segundo numero: ");
    	scanf("%d", &num2);
    	resultado = num1 - num2;
    	printf("El resultado de la resta es: %d\n", resultado);
    }   else if(opcion == 3){
    	int num1, num2, resultado;
    	printf("Introduce el primer numero: ");
    	scanf("%d", &num1);
    	printf("Introduce el segundo numero: ");
    	scanf("%d", &num2);
    	resultado = num1 * num2
    	printf("El resultado de la multiplicacion es: %d", resultado);
    }   else if(opcion == 4){
    	int num1, num2;
    	float resultado;
    	printf("Introduce el primer numero: ");
    	scanf("%d", &num1);
    	printf("Introduce el segundo numero: ");
    	scanf("%d", &num2);
    	if (num2 == 0) {
        printf("No se puede dividir entre cero\n");
        }else {
        resultado = (float)num1 / (float)num2;
        printf("El resultado de la division es: %f\n", resultado);
    }
         
}else {
  printf("opcion invalida\n");
}
   return;0 
}






