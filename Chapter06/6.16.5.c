#include <stdio.h>
int main()
{
    char a;
    printf("请输入一个字母\n");
    scanf("%c",&a);
    for(int i='A';i<=a;i++) {
        for(int j=a-i;j>0;j--) {
            printf(" ");
        }
        for(int j='A';j<=i;j++) {
            printf("%c",j);
        }
        for(int j=i-1;j>='A';j--) {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}