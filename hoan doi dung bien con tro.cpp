#include <stdio.h>

int main()
{
	int *pA, *pB;
	int a, b, tam;
	pA = &a;
	pB = &b;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	tam = a;
	a = b;
	b = tam;
	printf("a = %d \nb = %d", *pA, *pB);
	return 0;
}
