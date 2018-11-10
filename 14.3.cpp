#include <stdio.h>

int main()
printf("chen x vao phan tu chan cua mang: ");
int n;
printf("\nnhap so phan tu cua mang: ");
scanf("%d", &n);
int arr[n];
for(int i = 0; i <= n; i = i+ 1)
{
	printf("nhap phan tu thu %d: ", i + 1)
	scanf("%d", &arr[i]);
}
int check = 0;
int cout = 0;
for(int j = 0; j <= n; j = j + 1)
{
	if(arr[j] % 2 == 0)	
	{
		cout = cout + 1;
		check = j;
	}
	int arr1[cout];
	for(int k = 0; k <= cout; k = k + 1)
	{
		arr1[cout] = arr[check];
	}
	
	
}

