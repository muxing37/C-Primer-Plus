#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    char ch;
    printf("请输入字符，读到#时停止\n");
    do {
        scanf("%c",&ch);
        if(ch==' ') {
            a++;
        } else if(ch=='\n') {
            b++;
        } else {
            c++;
        }
        if(ch=='#') break;
    } while(ch!='#');
    printf("空格数：%d\n换行符数：%d\n其他字符：%d\n",a,b,c);
    return 0;
}