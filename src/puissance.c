#include<stdio.h>
#include<math.h>

int main(){

	double nombre, resultat;
	int puissance;

	printf("Quel nombre voulez vous elever?\n");
	scanf("%lf",&nombre);
	printf("A quelle puissance souhaitez vous l'elever\n");
	scanf("%d",&puissance);

	resultat=pow(nombre,puissance);
	printf("(%.2f)^%d = %.2f\n",nombre,puissance,resultat);
}
