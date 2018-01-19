#include <math.h>
#include <stdio.h>

int main(){
	float x=1.8,er=100,xn=1,fx=0,fpx=0;
	for(int i=0;i<15;i++){
		printf("\n %d)\n",i+1);
		fx=exp(x-1)-5*(pow(x,3));
		fpx=exp(x-1)-15*pow(x,2);
		printf("f(x)=%f			f`(x)=%f\n",fx,fpx);
		xn=x-(fx/fpx);
		printf("xn=%f		x=%f\n",xn,x);
		er=fabs((xn-x)/xn*100);
		x=xn;
		printf("res: %f			error: %f\n", x, er);
		
	}
	printf("\n\n\n Ariadna Angélica Gûemes Estrada \n Itzel Gil Porres \n Josue Huitznahui Bolaños Mejia\n");
	 printf("Objetivo: Calcular la interseccion de la funcion en el eje X usando el metodod de Newton-Raphson.\n");
	 printf("Polinomio:e^(x-1)-5x^3\n");
	 printf("Valor de X: 1.8\n");
	printf("res: %f			error: %f\n", x, er);
	
	

}

