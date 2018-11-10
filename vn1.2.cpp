#include <stdio.h>

int main()
{
	float a,b;
	printf("nhap so thu nhat : ");
	scanf("%f", &a);
	printf("nhap so thu hai : ");
	scanf("%f", &b);
	float s;
	s = a + b;
	printf("Tong hai so: %f + %f = %.2f", a , b , s);
	float h;
	h = a - b;
	printf("\nHieu hai so: %f - %f = %.2f", a , b , h);
	float p;
	p = a * b;
	printf("\nTich hai so: %f * %f = %.2f", a , b , p);
	float d;
	d = a / b;
if(b==0)
{
	printf("\nThuong hai so: Error");
}
else	
{
printf("\nThuong hai so: %f / %f = %.2f", a ,b ,d);
}
	return 0; 
	
}
