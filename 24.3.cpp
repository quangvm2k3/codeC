#include <stdio.h>

int main()
{
	printf("kiem tra tinh doi xung");
	int n;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	{
		for(int i = 0; i <= n; i = i + 1)
		{
			printf("nhap phan tu thu: ", i + 1);
			scanf("%d", &arr[i]);
		}
	int kq;
	if(n %2 == 1)
	{
		for(int j = 0; j <= n; j = j + 1)
		{
			if(arr[j] == arr[j-n])
			{
				kq = 1;	
			}
			else
			{
				kq = 0;
			}
		}	
	}
	else
	{
		kq = 0;
	}
	if(kq == 1)
	{
		printf("\nmang doi xung");
	}
	else
	{
		printf("\nmang khong doi xung");
	}
	return 0;
	}
}
	
