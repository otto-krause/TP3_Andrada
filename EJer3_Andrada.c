#include <stdio.h>
float Porcentaje(int a,int b)
{
	float t;
	t=a+b;
	return (a*100)/t;
}


int main(int argc, char *argv[]) {
	int muj,hom;
	float porcm=0,porch=0;
	printf("Ingrese total de Mujeres: ");
	scanf("%d",&muj);
	printf("Ingrese total de hombres: ");
	scanf("%d",&hom);
	porcm=Porcentaje(muj,hom);
	porch=Porcentaje(hom,muj);
	printf("Porcentaje de mujeres: %.2f\n",porcm);
	printf("Porcentaje de hombres: %.2f",porch);
	return 0; 
}
