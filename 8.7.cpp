#include <stdio.h>

int main()
{
	int n;
	int a, b;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	int tam = a;
	a = b;
	b = tam;
	printf("a = %d", a);
	printf("\nb = %d", b);
	return 0;
}
