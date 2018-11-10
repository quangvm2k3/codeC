/*tinh tong cua bieu thuc 1/2 + 3/4 + ... + 101/102*/
#include <stdio.h>

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	float tong = 0;
	for(int i = 1; i <= n; i = i + 1)
	{
		tong = tong + ((float)i)/((float)(i+1));
		printf("\ntong = %f", tong);
	}
	
	return 0;
}

