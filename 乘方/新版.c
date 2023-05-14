#include<stdio.h>

void main()
{int a;
printf("输入需要进行乘方运算的数");
    scanf("%d", &a);
    int b=2;
	int d = a;
	int c;
while(c>0)
{
    c = a * d;
    if(c>0)
    {
        if(c<1000000000)
        {
	printf("%d^",a);
	printf("%d", b);
	printf("=");
	printf("%d\n",c);
	b++;
	d = c;
        }
    }
}
return 0;
}
