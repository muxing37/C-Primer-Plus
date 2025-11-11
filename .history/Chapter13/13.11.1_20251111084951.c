//修改自13.1.c
#include <stdio.h>
#include <stdlib.h> // 提供 exit() 的原型

int main()
{
    int ch;         // 读取文件时，储存每个字符的地方
    FILE *fp;       // "文件指针"
    unsigned long count = 0;
    char name[200];
    printf("Please enter the filename:\n");
    /*
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    */
    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Can't open %s\n",name);
        exit(EXIT_FAILURE);
    }
    
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout); // 与 putchar(ch); 相同
        count++;
    }
    
    fclose(fp);
    printf("File %s has %lu characters\n",name, count);
    
    return 0;
}