#include <stdio.h>
void Temperatures(double,double *,double *);
int main()
{
    double hua,a,she,kai;
    printf("请输入一个华氏温度，输入非数字时程序停止\n");
    do {
        a=scanf("%lf",&hua);
        if(a!=1) break;
        Temperatures(hua, &kai, &she);
        printf("%.2lf°F = %.2lf°C = %.2lfK\n",hua,she,kai);
    } while(a==1);
    return 0;
}
void Temperatures(double hua,double *kai,double *she)
{
    const double huatoshe1=5.0/9.0;
    const double huatoshe2=32.0;
    const double huatokai=273.16;
    *she=huatoshe1*(hua-huatoshe2);
    *kai=*she+huatokai;
}