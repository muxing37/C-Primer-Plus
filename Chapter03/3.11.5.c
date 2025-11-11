#include <stdio.h>
int main()
{
    double s=3.156e7;
    int age;
    printf("请输入年龄：");
    scanf("%d",&age);
    double ss=s*age;
    printf("该年龄对应的秒数为：%e\n",ss);
    return 0;
}