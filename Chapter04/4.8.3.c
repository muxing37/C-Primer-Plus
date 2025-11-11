#include <stdio.h>
int main()
{
    float a;
    printf("Please input a float:\n");
    scanf("%f",&a);
    printf("a.The input is %.1f or %.1e.\n",a,a);
    printf("b.The input is %+.3f or %.3E.\n",a,a);
    return 0;
}