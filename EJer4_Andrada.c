#include <stdio.h>
void Presion(int a,int b)
{
	float P=a/b;
	printf("Presion: %.2f",P);
}


int main(int argc, char *argv[]) {
	int F,S;
	printf("Ingrese Fuerza: ");
	scanf("%d",&F);
	printf("Ingrese Superficie: ");
	scanf("%d",&S);
	Presion(F,S);
	return 0; 
}
