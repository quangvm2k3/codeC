//chuong trinh tim phan tu lon nhat va nho nhat trong mang mot chieu
#include <stdio.h>
int lonnhat(int a[n])
{
	int max = a[0];
	for(int i = 0; i <= n; i = i + 1)
	{
		if(max <= a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int nhonhat(int a[n]) 
{
	int min = a[0];
	for(int i = 0; i <= n; i = i + 1)
	{
		if(min >= a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int main()
{
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	for(int k = 0; k <= n; k = k + 1)
	{
		printf("nhap phan tu thu %d: ", k + 1);
		scanf("%d", a[k]);
	}
	int ln = lonnhat(a[n]);
	int nn = nhonhat(a[n]);
	printf("%d", ln);
	printf("\n%d", nn);
	return 0;
} 
