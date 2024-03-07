#include<stdio.h>

int main(){

	float degreF,degreC;
	printf("Veuillez entrer une valeur de degre Fahrenheit a convertir:\n");
	scanf("%f",&degreF);
	degreC=(degreF-32)/1.8;
	printf("%.2f Degre Fahrenheit = %.2f Degre Celsius\n",degreF,degreC);
}
