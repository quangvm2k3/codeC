#include <stdio.h>

int main()
{
	float a,b;
	printf("nhap so thu nhat : ");
	scanf("%f", &a);
	printf("nhap so thu hai : ");
	scanf("%f", &b);
if((a-b)==0)
	{
	printf("Vay %f = %f", a , b);	
	}
else
{
	printf("Vay %f khac %f", a , b);
}
	return 0;
}

