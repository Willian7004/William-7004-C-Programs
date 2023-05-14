#include<stdio.h>

void main()
{
	int a = 1;
int b = 1;
for (; b< 31;)
{
	int c;
	c = a * 2;
	printf("2^");
	printf("%d", b);
	printf("=");
	printf("%d\n",c);
	b++;
	a = c;
}
printf("\n");
int d = 1;
int e = 1;
for(;e<20;)
{
	int f;
	f = d* 3;
	printf("3^");
	printf("%d", e);
	printf("=");
	printf("%d\n", f);
	e++;
	d = f;
}
printf("\n");
int g= 1;
int h= 1;
for (; h< 16;)
{
	int i;
	i= g* 4;
	printf("4^");
	printf("%d", h);
	printf("=");
	printf("%d\n", i);
	h++;
	g= i;
}
printf("\n");
int j = 1;
int k = 1;
for (; k < 14;)
{
	int l;
	l = j * 5;
	printf("5^");
	printf("%d", k);
	printf("=");
	printf("%d\n", l);
	k++;
	j= l;
}
printf("\n");
int m= 1;
int n= 1;
for (; n< 12;)
{
	int o;
	o = m* 6;
	printf("6^");
	printf("%d", n);
	printf("=");
	printf("%d\n", o);
	n++;
	m= o;
}
printf("\n");
int p = 1;
int q = 1;
for (; q < 12;)
{
	int r;
	r = p* 7;
	printf("7^");
	printf("%d", q);
	printf("=");
	printf("%d\n", r);
	q++;
	p = r;
}
printf("\n");
int s = 1;
int t = 1;
for (; t < 11;)
{
	int u;
	u = s * 8;
	printf("8^");
	printf("%d", t);
	printf("=");
	printf("%d\n", u);
	t++;
	s = u;
}
printf("\n");
int v = 1;
int w = 1;
for (;w < 10;)
{
	int x;
	x = v * 9;
	printf("9^");
	printf("%d", w);
	printf("=");
	printf("%d\n", x);
	w++;
	v = x;
}

}
