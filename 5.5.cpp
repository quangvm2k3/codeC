#include <stdio.h>

int main()
{
	int a, p;
	printf("nhap do dai duong cheo: ");
	scanf("%d", &a);
	printf("nhap chu vi hinh chu nhat: ");
	scanf("%d", &p);
	float sum;
	sum = p / 2;
	float s;
	s = (sum * sum - a * a) / 2;
	if(s > 0)
	{
		printf("Dien tich = %.2f.", s);
	}
	else
	{
		printf("loi: dien tich < 0");
	}
	return 0;
}
