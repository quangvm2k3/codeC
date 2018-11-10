#include <stdio.h>

int main()
{
	int a[1];
	for(int i = 0; i <= 1; i = i + 1)
	{
		printf("nhap gia tri thu %d : ", i + 1);
		scanf("%d", &a[i]);
	}
	for(int k = 0; k <= 1; k = k + 1)
	{
		a[k] = a[k + 1];
		a[k] = a[k - 1];
		printf("\n%d", a[k]);
	}
	return 0;
}
