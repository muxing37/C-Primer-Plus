#include <stdio.h>
#include <stdlib.h> // 提供 exit() 的原型

int main()
{
    int ch;         // 读取文件时，储存每个字符的地方
    FILE *fp1,*fp2;       // "文件指针"

    char name1[200],name2[200];
    char line1[1000],line2[1000];

    printf("Please enter the first filename:\n");
    scanf("%199s",name1);
    printf("Please enter the second filename:\n");
    scanf("%199s",name2);
    if ((fp1 = fopen(name1, "r")) == NULL)
    {
        printf("Can't open %s\n",name1);
        fclose(fp1);
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen(name2, "r")) == NULL)
    {
        printf("Can't open %s\n",name2);
        fclose(fp1);
        exit(EXIT_FAILURE);
    }
    while(1) {
        if(fgets(line1,sizeof(line1),fp1)!=NULL) {
            printf("%s",line1);
        }
        if(fgets(line2,sizeof(line2),fp2)!=NULL) {
            printf("%s",line2);
        }
        if(feof(fp1) && feof(fp2)) break;
    }
    
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}