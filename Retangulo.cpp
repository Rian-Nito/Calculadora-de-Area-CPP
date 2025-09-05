#include <stdio.h>

int area_retangulo(int h,int l){
		int a = h * l;
		return a;
}

int main(){
	int h = 10;
	int l = 20;
	printf("A area do retangulo é %d" , area_retangulo(h,l));
	return 0;
}
