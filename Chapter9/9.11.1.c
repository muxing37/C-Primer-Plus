#include <stdio.h>
double min(double,double);
int main()
{
    double a,b,mi;
    printf("请输入两个数:\n");
    scanf("%lf %lf",&a,&b);
    mi=min(a,b);
    printf("较小值是%g\n",mi);
    return 0;
}
double min(double x,double y) {
    double min;
    if(x<y) {
        min=x;
    } else {
        min=y;
    }
    return min;
}