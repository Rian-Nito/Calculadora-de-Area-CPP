#include <stdio.h>

float area_circulo(float r){
	float a = 3.14 * r * r;
	return a;
}

int main(){
	float r = 45;
	printf("A area do circulo é %f", area_circulo(r));
	return 0;
}
