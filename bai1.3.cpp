#include <stdio.h>

int main()
{
	int a,b;
	/*comment*/
	printf("nhap so thu nhat: ");
	scanf("%d", &a);
	printf("so vua nhap la: %d.\n", a);
	scanf("%d", &b);
	printf("so vua nhap la: %d.\n", b);
	int c;
	c = a + b;
	printf("ket qua la: %d + %d = %d", a, b ,c);
	return 0;
}
