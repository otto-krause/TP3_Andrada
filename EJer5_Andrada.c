#include <stdio.h>
int acu=0;
void Resistencia(int a, int b)
{
	printf("Resistencia N°%d: %d\n",a,b);
	acu=b+acu;
	if (a==5)
		printf("Total: %d",acu);
}
int main(int argc, char *argv[]) {
	int r,i;
	for (i=1;i<6;i++)
	{
		printf("Ingrese Resistencia: ");
		scanf("%d",&r);
		Resistencia(i,r);
	}
	return 0; 
}
