#include <stdio.h>

int main()
{
	printf("Chen X vào day sao cho day van theo thu tu tang dan");
	int n;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nNhap cac phan tu theo thu tu tang dan");
	printf("\n");
	for(int i = 0; i <= n; i = i + 1)
	{
		printf("phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d", &x);
	int check = 0;
	for(int k = 0; k <= n; k = k + 1)
	{
		if(x >= arr[k] && x <= arr[k + 1])
		{
			check = k + 1;
		}
	}
	
	int arr1[n + 1];
	for(int j = 0; j <= check; j = j + 1)
	{
		arr1[j] = arr[j];
	}
	arr1[check] = x;
	for(int l = check; l <= n; l = l + 1)
	{
		arr1[l + 1] = arr[l];
	}
	for(int t = 0; t <= n + 1; t = t + 1)
	{
		printf("\n%d", arr1[t]);
	}
	return 0;
}

