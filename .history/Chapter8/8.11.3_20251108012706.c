#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int up=0;
    int down=0;
    printf("请输入一些字母(按Ctrl+D结束输入):\n");
    while ((ch = getchar()) != EOF) {
        ch=getchar();
        if(isupper(ch)) {
            up++;
        }
        else if(islower(ch)){
            down++;
        }
    }
    printf("\n大写字母数量: %d\n", up);
    printf("小写字母数量: %d\n", down);
    return 0;
}