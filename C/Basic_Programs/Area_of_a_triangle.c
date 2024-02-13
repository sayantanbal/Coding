#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, h;
	printf("Enter the value of base::");
	scanf("%d", &b);
	printf("Enter the value of height::");
	scanf("%d", &h);
	a = (0.5) * (b * h);
	printf("The Area of the Triangle is=%d", a);
	return 0;
}