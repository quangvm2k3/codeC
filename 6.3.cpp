#include<stdio.h>

int main()
{
	int n;
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	int arr1[n];
	for(int i = 0; i <= n; i = i + 1)
	{
		printf("nhap phan tu thu %d: ", i + 1);
		scanf("\n%f", &arr1[i]);
	}
	int arr2[n + 1];
	arr1[0] = arr2[1];
	for(int j = 0; j <= n; j = j + 1)
	{
		printf("%d \n", arr2[j] );
	}
	return 0;
}
	
	
	
		

	
	
	

