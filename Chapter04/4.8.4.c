#include <stdio.h>
int main()
{
    char name[50];
    float high;
    printf("请输入身高(单位:cm)和姓名：\n");
    scanf("%f %s",&high,name);
    printf("%s,you are %gm high.\n",name,high/100);
    return 0;
}