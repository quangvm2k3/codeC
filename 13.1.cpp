#include <stdio.h>

int main()
{
	int n;
	printf("nhap so phan tu : ");
	scanf("%d", &n);
	int arr1[n];
	for(int i = 0; i <= n; i = i + 1)
	{
		printf("nhap phan tu thu %d : ", i + 1);
		scanf("%d", &arr1[i]);
	}
	int x;
	printf("\nnhap phan tu: ");
	scanf("%d", &x);
	int arr2[n+1];
	for(int k = 0; k <= n; k = k + 1)
	{
		arr2[k+1] = arr1[k];
	}
	arr2[0]= x;
	for(int j = 0; j <= n + 1; j = j + 1)
	{
		printf("%d\n", arr2[j]);
	}
	return 0;
}
