#include<stdio.h>

void main()
{int a=2;
int b=2;
	int d;
	int c;
while(a<1000)
 {printf("%d\n",a);
     FILE *file;
	file = fopen("D:\\file.txt","a");
	fprintf(file,"%d ",a);
	fprintf(file,"乘方\n");
	fclose(file);
    d=a;
    c=1;
  while(c>0&&c<1000000000)
   {
    c = a * d;
     {
        if(c>0&&c<1000000000)
        {FILE *file;
	file = fopen("D:\\file.txt","a");
	fprintf(file,"%d^",a);
	fprintf(file,"%d", b);
	fprintf(file,"=");
	fprintf(file,"%d\n",c);
	fclose(file);
	b++;
	d = c;
        }

     }
   }

   b=2;
   a++;
 }
 return 0;
}
