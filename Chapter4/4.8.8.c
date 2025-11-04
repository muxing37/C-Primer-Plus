#include <stdio.h>
#define gallontol 3.785
#define mitokm 1.609
int main()
{
    double gallon,mi,L,km,a;
    printf("请输入旅行的里程(英里)和消耗的汽油量(加仑):");
    scanf("%lf %lf",&mi,&gallon);
    a=mi/gallon;
    printf("消耗每加仑汽油行使的英里数为%.1lf\n",a);
    a=(gallon*gallontol)/(mi*mitokm)*100;
    printf("消耗每升汽油行使的千里数为%.1lf\n",a);
    return 0;
}