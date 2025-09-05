#include <stdio.h>

float area_trapezio(float B,float b,float h){
	float a = (B+b) * h/2;
	return a;
}

int main(){
	float B = 10;
	float b = 10;
	float h = 8;
	printf("A area de trapézio %f", area_trapezio(B,b,h));
	return 0;
}
