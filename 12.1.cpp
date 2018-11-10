#include <stdio.h>

int main()
{
	int n;
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	int arr1[n];
	for(int i = 0; i <= n; i = i + 1)
	{
		printf("nhap phan tu thu %d : ", i + 1);
		scanf("%d", &arr1[i]);
	}
	int x;
	printf("nhap so can chen: ");
	scanf("%d", &x);
	int max = arr1[0];
	int point_max;
	for(int k = 0; k <= n; k = k + 1)
	{
		if (max <= arr1[k])
		{
			max = arr1[k];
			point_max = k;
		}
	}
	int arr2[n + 1];
	for (int t = 0; t <= point_max; t = t + 1)
	{
		arr2[t] = arr1[t];
	}
	
	for (int l = point_max + 1; l <= n + 1; l = l + 1)
	{
		arr2[l + 1] = arr1[l];
	}
	arr2[point_max + 1] = x;
	for (int p = 0; p <= n + 1; p = p + 1)
	{
		printf("%d\n", arr2[p]);
	}
	return 0;
}

