#include<stdio.h>
#define n 1000
int main()
{while(1)//使用循环，程序运行一次可以转换多个数字
 {int c;
 printf("输入输入的的数字的进制(不超过10）");
scanf("%d",&c);
  int b;
printf("输入需要输出的数字的进制");
scanf("%d",&b);
int N;
printf("输入需要转换进制的数\n");
scanf("%d",&N);
int e,h;
int f=0;
int g=c;
//把输入的数字的每一位乘以输入的进制在相应数位的数所代表的十进制数并加到转换结果中
f=N%c;
for(e=0;N!=0;e++)
{N=N/10;
if(N!=0)
{
h=N%c;
f=f+g*h;
g=g*c;
}
}
int a[n];
int i,j;
//把得到的十进制数取余再除以要转换成的进制，从而转换为目标进制，使用字符串以输出更多数位、最多16进制的数
for(i=0;f!=0;i++)
{
a[i]=f%b;
f/=b;
}
char ch[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
j=i-1;
printf("转换结果\n");
for(j=i-1;j>=0;j--)
{
printf("%c",ch[a[j]]);
}
printf("\n\n");
 }
return 0;
}
