#include <stdio.h>

int main()
{	
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i <= n; i = i + 1)
	{
		printf("nhap so thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d", &x);
	
	int cout = 0;
	int check = 0;
	int a2[n - cout];
	for(int k = 0; k <= n ; k = k + 1)
	{
		if(a[k] == x)
		{
			for(int j = check; j <= k; j = j + 1)
			{
				a2[j - cout] = a[j];
			}
			cout = cout + 1;
			check = k;
		}
	}
	for(int t = 0; t <= n - cout; t = t + 1)
	{
		printf("%d  ", a2[t - cout]);s
	}
	return 0;
}
