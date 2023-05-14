#include <stdio.h>
int main() {
	for (int b = 1; b < 500; )
	{
		int a = rand();
		int c = a % 1000;
		if (c > 99)
		{
			printf("%d", c);
			printf(" ");
			b = b + 1;

		}
	}
	}
