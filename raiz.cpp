#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,x1,x2,delta,quadrado,raiz;
	
	printf("Digite o A:");
	scanf("%lf",&a);
	printf("Digite o B:");
	scanf("%lf",&b);
	printf("Digite o C:");
	scanf("%lf",&c);
	
	quadrado = b*b;
	delta = quadrado - 4 * a * c;
	
	if(delta<0){
		printf("Não existe raiz quadrada real para numero negativo\n");
	
	}else{
		raiz=sqrt(delta);
		
			x1 = (-b + raiz) / 2 * a;
			x2 = (-b - raiz) / 2 * a;
			printf("valor de delta:%.2lf\n valor de x1:%.2lf\n valor de x2:%.2lf", delta,x1,x2);
	}
	return 0;
}




