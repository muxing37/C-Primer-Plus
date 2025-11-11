#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source, *target;
    char buffer[4096];  // 4KB缓冲区
    size_t bytes_read;
    
    // 检查命令行参数
    if (argc != 3) {
        fprintf(stderr, "使用方法: %s <源文件> <目标文件>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    // 以二进制读模式打开源文件
    source = fopen(argv[1], "rb");
    if (source == NULL) {
        fprintf(stderr, "错误: 无法打开源文件 '%s'\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    // 以二进制写模式打开目标文件
    target = fopen(argv[2], "wb");
    if (target == NULL) {
        fprintf(stderr, "错误: 无法创建目标文件 '%s'\n", argv[2]);
        fclose(source);
        exit(EXIT_FAILURE);
    }
    
    // 拷贝文件内容
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source)) > 0) {
        if (fwrite(buffer, 1, bytes_read, target) != bytes_read) {
            fprintf(stderr, "错误: 写入目标文件时发生错误\n");
            fclose(source);
            fclose(target);
            exit(EXIT_FAILURE);
        }
    }
    
    // 检查读取是否遇到错误
    if (ferror(source)) {
        fprintf(stderr, "错误: 读取源文件时发生错误\n");
    }
    
    // 关闭文件
    fclose(source);
    fclose(target);
    
    printf("文件拷贝成功: '%s' -> '%s'\n", argv[1], argv[2]);
    
    return 0;
}