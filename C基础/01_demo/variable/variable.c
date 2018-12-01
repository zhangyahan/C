#include <stdio.h>

int main()
{
	/* code */
	int a;
	char b;
	float c;
	double d;

	a = 1997;
	b = 'Z';
	c = 1.7;
	d = 3.1415926;

	printf("我叫%c\n", b);
	printf("出生于%d\n", a);
	printf("我的身高是%4.2f\n", c);
	printf("圆周率精确到小数点后六位是%8.6f\n", d);

	return 0;
}