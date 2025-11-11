#include <stdio.h>
#include <ctype.h>  // 提供 isupper() 和 islower()

int main(void)
{
    int ch;
    int upper_count = 0; // 统计大写字母个数
    int lower_count = 0; // 统计小写字母个数

    printf("请输入一些字符（按 Ctrl+D 结束输入）：\n");

    while ((ch = getchar()) != EOF)  // 读取直到遇到 EOF
    {
        if (isupper(ch))
            upper_count++;
        else if (islower(ch))
            lower_count++;
    }

    printf("\n大写字母数量: %d\n", upper_count);
    printf("小写字母数量: %d\n", lower_count);

    return 0;
}