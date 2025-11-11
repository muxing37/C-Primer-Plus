#include <stdio.h>
double cha(double *,int);
int main()
{
    double a[5000];
    int i,j,b;
    double c;
    j=1;
    printf("请输入一些数字，输入字母时程序停止\n");
    for(i=0;j!=0;i++) {
        j=scanf("%lf",&a[i]);
    }
    c=cha(&a,i);
    printf("%g\n",c);
    for(j=0;j<i-1;j++) { printf("%g ",a[i]); }
    return 0;
}
double cha(double *a,int n) {
    int i,j;
    double t;
    for(i=1;i<n-1;i++) {
        for(j=i;j<n-1;j++) {
            if(a[j-1]<a[j]) {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }
    for(j=0;j<i-1;j++) { printf("%g ",a[i]); }
    printf("\n");
    return a[n-1]-a[0];
}