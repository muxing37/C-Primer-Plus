#include <stdio.h>
double min(double,double);
int main()
{
    double a,b,mi;
    printf("请输入两个数:\n");
    scanf("%lf %lf",&a,&b);
    mi=min(a,b);
    printf("较小值是%lf\n",min);
    return 0;
}
double min(double x,double y) {
    int min;
    if(x<y) {
        min=x;
    } else {
        min=y;
    }
    return min;
}