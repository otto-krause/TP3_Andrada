#include <stdio.h>
void Octava(float a)
{
	float t;
	t=a/8;
	printf("Octava parte: %.2f",t);
}


int main(int argc, char *argv[]) {
	float num;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	Octava(num);
	return 0; 
}
