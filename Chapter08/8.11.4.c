#include <stdio.h>
int main()
{
    int ch;
    int c=0,n=0,m=0;
    printf("请输入文本(输入英文，按Ctrl+D结束输入):\n");
    while (ch!=EOF) {
        ch=getchar();
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            c++;
            if(m==0) {
                n++;
                m=1;
            }
        } else if (ch==' ' || ch=='\t' || ch=='\n') {
            m=0;
        }
    }
    printf("\n单词数量:%d\n",n);
    printf("字母数量:%d\n",c);
    printf("平均每个单词的字母数量:%g\n",(double)c/n);
    return 0;
}