#include <math.h>
#include <stdio.h>

float funcion(float x){
	float res;
	res=-2*pow(x,6)-1.5*pow(x,4)+10*x+2;
	return res;
}
float ecuacion(float fp1,float fp0, float p1, float p0){
	float res=p1-((fp1*(p1-p0))/(fp1-fp0));
	return res;
}
float error(float p1, float p2){
	float res;
	res=fabs((p2-p1)/p2*100);
	return res;
}
int main(){
	float x=0,fp1=0,fp0=0,p1=1,p0=0,er=100,p2=0;
	while(er>1){
		x=p1;
		fp1=funcion(x);
		x=p0;
		fp0=funcion(x);
		printf("fp0=%f			fp1=%f\n",fp0,fp1);
		p2=ecuacion(fp1,fp0,p1,p0);
		er=error(p1,p2);
		p0=p1;
		p1=p2;
		printf("Res: %f			Er=%f			p1=%f\n",p1,er,p0);
		
	}
	printf("\n\n\n Ariadna Angélica Gûemes Estrada \n Itzel Gil Porres \n Josue Huitznahui Bolaños Mejia\n");
	 printf("Objetivo:Calcular la interseccion en el eje X utilizando el metodo de la Secante.\n");
	 printf("Polinomio:-2x^6-1.5x^4+10x+2\n");
	 printf("Valor de p0: 0		p1: 1\n");
	printf("Res: %f			Er=%f",p1,er);
}
