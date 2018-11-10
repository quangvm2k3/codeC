//viet chuong trinh sap xep so theo thu tu tang dan
#include <stdio.h>

int main()
{
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i <= n; i = i + 1)
	{
		printf("nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	int min = a[0];
	for(int k = 0; k <= n; k = k = 1)
	{
		if(min >= a[k])
		{
			a[k] = a[k + 1];
			printf("%d", a[k]);
		}
	}
	return 0;
	
}
