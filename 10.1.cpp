#include <stdio.h>

char hoa_thuong(char a)
{
	int convert;
	convert = ((int)a) + 32;
	return ((char)convert);
}
 char thuong_hoa (char b)
 {
 	int convert;
	convert = ((int)b) * 32;
	return ((char)convert);
 }	
int main()
{
	char i;
	printf("nhap input: ");
	i = getchar();
 	if((i >= 'A') && (i <= 'Z'))
 	{
 		i = hoa_thuong(i);
		printf("%c", i);  
 	} 
  	else if((i >= 'a') && (i <= 'z'))
 	{
 		i = thuong_hoa(i);
		printf("%c", i);  
 	} 
	return 0;
}

