#include <stdio.h>
void change(int *c);
int main()
{
	int a = 5;
	int *b = &a;
	*b = 7;
	printf("%d\n", b);
	printf("%d\n", &a);
	change(b);
	printf("%d", a);
}
void change(int *c)
{
	*c = 13;
}
