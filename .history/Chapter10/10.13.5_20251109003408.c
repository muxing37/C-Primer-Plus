#include <stdio.h>
double cha(double *,int);
int main()
{
    double a[5000];
    int i,j,b;
    double c;
    j=1;
    printf("请输入一些数字，输入字母时程序停止\n");
    for(i=0;j==1;i++) {
        j=scanf("%lf",&a[i]);
    }
    for(j=0;j<i-1;j++) { printf("%g ",a[i]); }
    c=cha(a,i);
    
    printf("%g\n",c);
    for(j=0;j<i-1;j++) { printf("%g ",a[i]); }
    return 0;
}
double cha(double *b,int n) {
    int i,j;
    double t;
    for(i=1;i<n-1;i++) {
        for(j=i;j<n-1;j++) {
            if(b[j-1]<b[j]) {
                t=b[j-1];
                b[j-1]=b[j];
                b[j]=t;
            }
        }
    }
    for(j=0;j<i-1;j++) { printf("%g ",b[i]); }
    printf("\n");
    return b[n-1]-b[0];
}