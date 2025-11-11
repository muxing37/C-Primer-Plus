#include <stdio.h>
void m(double *,double *,double *);
int main()
{
    double a,b,c;
    printf("请输入三个数字：\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    m(&a,&b,&c);
    printf("%g %g %g\n",a,b,c);
    return 0;
}
void m(double *a,double *b,double *c) {
    double t;
    if(*a>*b) {
        t=*a;
        *a=*b;
        *b=t;
    }
    if(*b>*c) {
        t=*b;
        *b=*c;
        *c=t;
    }
    if(*a>*b) {
        t=*a;
        *a=*b;
        *b=t;
    }
}