#include <stdio.h>
#define CSIZE 4
struct name {
    char first[20];
    char last[20];
};
struct student {
    struct name sname;
    double grade[3];
    double ave;
};
void getgn(struct student students[]);
void calave(struct student students[]);
void pri(struct student students[]);
double clave(struct student students[]);
int main()
{
    struct student stu[CSIZE];
    getgn(stu);
    calave(stu);
    pri(stu);
    double aver=clave(stu);
    printf("班级平均分:%g\n",aver);
    return 0;
}

void getgn(struct student stu[]) {
    for(int i=0;i<CSIZE;i++) {
        printf("请输入第%d位学生的名和姓\n",i+1);
        scanf("%19s %19s",stu[i].sname.first,stu[i].sname.last);
        printf("请输入第%d位学生的三个分数\n",i+1);
        scanf("%lf %lf %lf",&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
    }
}
void calave(struct student stu[]) {
    for(int i=0;i<CSIZE;i++) {
        double sum=0;
        for (int j = 0; j < 3; j++) {
            sum=sum+stu[i].grade[j];
        }
        stu[i].ave=sum/3;
    }
}
void pri(struct student stu[]) {
    printf("\n学生信息:\n");
    for (int i=0;i<CSIZE;i++) {
        printf("%s %s: 分数=%.1f,%.1f,%.1f, 平均分=%.2f\n",
               stu[i].sname.first,
               stu[i].sname.last,
               stu[i].grade[0],
               stu[i].grade[1],
               stu[i].grade[2],
               stu[i].ave);
    }
}
double clave(struct student stu[]) {
    double tave=0;
    for (int i=0;i<CSIZE;i++) {
        tave=tave+stu[i].ave;
    }
    return tave/CSIZE;
}