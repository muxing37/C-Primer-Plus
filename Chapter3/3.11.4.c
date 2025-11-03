#include <stdio.h>
int main()
{
    double a;
    printf("Enter a floating-point value: ");
    scanf("%lf",&a);
    printf("fixed-point notation: %lf\n",a);
    printf("exponential notation: %e\n",a);
    printf("p notation: %a\n",a);
    return 0;
}