#include <stdio.h>
void Perimetro(float a,float b)
{
	float P;
	P=2* a + 2* b;
	printf("Perimetro: %.2f\n",P);
} 
void Area(float a,float b)
{
	float A;
	A=a*b;
	printf("Area: %.2f",A); ;
} 

int main(int argc, char *argv[]) {
	float num,num2;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	printf("Ingrese otro numero: ");
	scanf("%f",&num2);
	Perimetro(num,num2);
	Area(num,num2);
	return 0; 
}
