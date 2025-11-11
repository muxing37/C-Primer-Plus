#include <stdio.h>
#define CSIZE 4
struct name {
    char first[20];
    char last[20];
};
struct student {
    struct name sname;
    float grade[3];
    float ave;
};
void getgrade(struct student students[]);
void calave(struct student students[]);
void pri(struct student students[]);
float clave(struct student students[]);
int main()
{
    struct student stu[CSIZE];
    get(stu);
}

void get(struct student stu[]) {
    for(int i;i<4;i++) {
        printf("请输入第%d位学生的名和姓\n",i+1);
        scanf("%19s %19s",stu[i].sname.first,stu[i].sname.last);
        printf("请输入第%d位学生的三个分数\n",i+1);
        scanf("%lf %lf %lf",stu[i].grade[0],stu[i].grade[1],stu[i].grade[2]);
    }
}
void calave(struct student stu[]) {

}
void pri(struct student stu[]) {

}
float clave(struct student stu[]) {

}