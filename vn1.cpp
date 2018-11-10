#include <stdio.h>

int main()
{
	float r;
	printf("Tinh dien tich hinh tron");
	printf("\nBan kinh duong tron :");
	scanf("%f", &r);
	float s;
	s = r * r * 3.14;
	printf("Dien tich hinh tron la :%f * %f * 3.14 = %.2f", r , r , s);
	return 0;
}

