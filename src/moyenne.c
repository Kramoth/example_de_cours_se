#include<stdio.h>

int main(){
	float note1, note2, note3;
	float res;
	printf("Entrez la premiere note: \n");
	scanf("%f",&note1);
	printf("Entrez la premiere note: \n");
	scanf("%f",&note2);
	printf("Entrez la premiere note: \n");
	scanf("%f",&note3);
	res=(note1+note2+note3)/3;
	printf("la moyenne est de %.2f\n",res);
}
