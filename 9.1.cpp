#include <stdio.h>

int tong (int a, int b)
{
	return ( a + b);
}
int hieu (int c, int d)
{
	return ( c - d);
}
int tich (int e, int f)
{
	return ( e * f);
}
float thuong (float g, float h)
{
	return g / h;
}
int main()
{
	int s1, s2;
	printf("nhap so 1: ");
	scanf("%d", &s1);
	printf("nhap so 2: ");
	scanf("%d", &s2);
	int kqtong;
	kqtong = tong(s1 , s2);
	printf("tong = %d", kqtong);
	int kqhieu;
	kqtong = hieu(s1, s2);
	printf("\nhieu = %d", kqhieu);
	int kqtich;
	kqtich = tich(s1, s2);
	printf("\ntich = %d", kqtich);
	float kqthuong;
	kqthuong = thuong(s1, s2);
	if(s2 == 0)
	{
		printf("\nthuong : so bi chia khac 0");
	}
	else
	{
		printf("\nthuong = %f", kqthuong);
	}
return 0;
}

