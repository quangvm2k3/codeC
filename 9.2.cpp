#include <stdio.h>

int swap1 (int a, int b, int tam)
{
	tam = a;
	a = b;
	b = tam;
	return a, b;
}
int swap2 (int c, int d)
{
	c = c + d;
	d = c - d;
	c = c - d;	
	return c, d;
}	
int main()
{
	int s1, s2, i;
	printf("nhap so thu nhat: ");
	scanf("%d", &s1);
	printf("nhap so thu hai: ");
	scanf("%d", &s2);	
	printf("chon cach: ");
	scanf("%d", &i);
	switch (i);
	{
		case(1):
			{
				swap1(s1 ,s2);
				printf("%d", s1);
				printf("\n%d", s2);
				break;
			}
		case(2):
			{
				swap2(s1 ,s2);
				printf("%d", s1);
				printf("\n%d", s2);
				break;
			}	
	}
return 0;
}
