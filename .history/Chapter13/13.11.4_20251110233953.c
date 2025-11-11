#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;
    int ch;
    int i;
    
    // 检查是否有文件参数
    if (argc < 2) {
        fprintf(stderr, "使用方法: %s <文件1> <文件2> ... <文件N>\n", argv[0]);
        fprintf(stderr, "示例: %s file1.txt file2.txt\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    // 使用 argc 控制循环，遍历所有文件参数
    for (i = 1; i < argc; i++) {
        // 打开当前文件
        file = fopen(argv[i], "r");
        if (file == NULL) {
            fprintf(stderr, "错误: 无法打开文件 '%s'\n", argv[i]);
            continue;  // 继续处理下一个文件
        }
        
        // 显示文件名作为分隔（可选）
        printf("\n=== 文件: %s ===\n", argv[i]);
        
        // 逐字符读取并显示文件内容
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        
        // 检查是否遇到读取错误
        if (ferror(file)) {
            fprintf(stderr, "错误: 读取文件 '%s' 时发生错误\n", argv[i]);
        }
        
        // 关闭当前文件
        fclose(file);
    }
    
    printf("\n所有文件显示完成。\n");
    return 0;
}