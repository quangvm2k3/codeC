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
	printf("nhap x: ");
	scanf("%d", &x);
	int cout = 0;
	int check = 0;
	int arr2[n + cout];
	for(int k = 0; k <= n; k = k + 1)
	{
		if(arr1[k] %2 == 0)
		{
			for(int j = check; j <= k; j = j + 1)
			{
				arr2[j + cout] = arr1[j];
				arr2[j + 1] = x;
			}
			cout = cout + 1;
			check = k;
		}
	}
	for(int t = 0; t <= n + cout; t = t + 1)
	{
		printf("%d  ", arr2[t + cout]);
	}
	return 0;
}

