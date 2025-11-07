#include <stdio.h>
int main()
{
    int a;
    int numo=0,numj=0,sumo=0,sumj=0;
    double oa,ja;
    printf("请输入整数，输入0后程序停止\n");
    do {
        scanf("%d",&a);
        if(a==0) break;
        if(a%2==0) {
            numo++;
            sumo=sumo+a;
        } else {
            numj++;
            sumj=sumj+a;
        }
    } while(a!=0);
    if(numo==0) {
        oa=0;
    } else {
        oa=(double)sumo/numo;
    }
    if(numj==0) {
        ja=0;
    } else {
        ja=(double)sumj/numj;
    }
    printf("偶数个数：%d 平均值：%g\n",numo,oa);
    printf("奇数个数：%d 平均值：%g\n",numj,ja);
    return 0;
}