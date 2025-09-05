#include <stdio.h>

float area_prisma(float comprimento, float largura, float altura){
	float base = comprimento * largura;
	float lateral = 2 * (comprimento * altura * largura * altura);
	float a = 2 * base * lateral;
	return a;
}

int main(){
	float c = 3;
	float l = 2;
	float a = 5;
	printf("A area do prisma é %f", area_prisma(c,l,a));
	return 0;
}
