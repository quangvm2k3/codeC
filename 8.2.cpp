/*viet chuong trinh dao nguoc mang*/
#include <stdio.h>

int main()
{
	int n;
	printf("nhap so phan tu trong mang : ");
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i <= n; i = i + 1)
	{
		printf("nhap gia tri thu %d : ", i + 1);
		scanf("%d", &a[i]);
	}	

	if(n %2 == 1)
	{
		for( int j = 0; j <= n / 2; j = j + 1)
		{
			a[j] = a[j] + a[n - j];
			a[n - j]= a[j] - a[n - j]; 
			a[j] = a[j] - a [n - j]; 
		}
	}
	else
	{
		for( int t = 0; t <= n / 2 - 1; t = t + 1)
		{
			a[t] = a[t] + a[n - t];
			a[n - t]= a[t] - a[n - t]; 
			a[t] = a[t] - a [n - t]; 
		}
	}
	for( int k = 0; k <= n; k = k + 1)
	{
		printf("\n%d", a[k]);
	}
	return 0;
}
