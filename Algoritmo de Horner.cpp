#include <stdio.h>;
 using namespace std;
 
int  main(){
 	int n=4,i;
 	float a[n],x,p;
 	
 	x=4.71;
 	
 	a[0]=1.5;
 	a[1]=3.2;
 	a[2]=-6.1;
 	a[3]=1;
 	
 	p=a[n-1];
 	
 	for(i=2;i>=0;i--){
 		p=a[i]+x*p;
 		//printf("%f \n",p);
	 }
	 printf(" Ariadna Angélica Gûemes Estrada \n Itzel Gil Porres \n Josue Huitznahui Bolaños Mejia\n");
	 printf("Objetivo: Resolver el problema a través del algoritmo de Horner\n");
	 printf("Polinomio: x^3 %f x^2 + %f x + %f \n",a[2],a[1],a[0]);
	 printf("Valor de X: 4.71\n");
	 
	 printf("Resultado: %f\n",p);
 }


