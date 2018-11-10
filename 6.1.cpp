/*tinh tong cua x + x^3 + x^5 + ...  + x^(2n+1)*/
#include <stdio.h>

int main()
{
	int n, x;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("nhap x: ");
	scanf("%d", &x);
	int tong = 1;
	for(int i = 1; i <= n; i = i + 1)
	{
		tong = tong * x;
	}
	printf("%d", tong);
	return 0;
}
