#include <stdio.h>
void br();
void ic();
int main()
{
	br();
	printf(",");
	ic();
	printf("\nIndia,China\n");
	br();
	return 0;
}
void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China");
}
