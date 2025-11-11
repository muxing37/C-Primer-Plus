#include <stdio.h>
#define TIAOHE(x, y) (1/((1/x+1/y)/2))
int main() {
    double a,b;
    printf("请输入两个数字：\n");
    scanf("%lf %lf",&a,&b);
    printf("调和平均数：%g\n",TIAOHE(a, b));
    return 0;
}