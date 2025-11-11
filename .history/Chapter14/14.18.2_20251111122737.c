#include <stdio.h>
#include <string.h>
struct month {
    char name[16];
    char na[4];
    int day;
    int mnum;
};
struct month year[12]={
    {"January","Jan",31,1},
    {"February","Feb",28,2},
    {"March","Mar",31,3},
    {"April","Apr",30,4},
    {"May","May",31,5},
    {"June","Jun",30,6},
    {"July","Jul",31,7},
    {"August","Aug",31,8},
    {"September","Sep",30,9},
    {"October","Oct",31,10},
    {"November","Nov",30,11},
    {"December","Dec",31,12}
};
int days(int d,char* mnum,int y);
int main()
{
    char mname[16]={0};
    int d,y;
    printf("请输入日\n");
    scanf("%d",&d);
    printf("请输入月，可以是月份号、月份名(首字母大写)或月份名缩写(三个字母，首字母大写)\n");
    scanf("%s",mname);
    printf("请输入年\n");
    scanf("%d",&y);
    int total=days(d,mname,y);
    if(total!=0) {
        printf("到%s为止的总天数是%d天\n",mname,total);
    }
    return 0;
}
int days(int d,char* mnum,int y) {
    int sum=0;
    int c=0;
    if(y%400==0 || (y%4==0 && y%100!=0)) {
        year[2].day=29;
    }
    if(strlen(mnum)<=2) {
        int m;
        if(strlen(mnum)==2){
            m=(mnum[0]-'0')*10+(mnum[1]-'0');
        }
        if(strlen(mnum)==1){
            m=(mnum[0]-'0');
        }
        for(int i=0;i<12;i++) {
            if(m==year[i].mnum) {
                if(d>year[i].day) {
                    sum=0;
                    break;
                }
                for(int j=0;j<i;j++) {
                    sum=sum+year[j].day;
                    c=1;
                }
                
                sum=sum+d;
                break;
            }
        }
    } else {
        for(int i=0;i<12;i++) {
            if(strcmp(mnum,year[i].name)==0 || strcmp(mnum,year[i].na)==0) {
                if(d>year[i].day) {
                    sum=0;
                    break;
                }
                for(int j=0;j<i;j++) {
                    sum=sum+year[j].day;
                    c=1;
                }
                
                sum=sum+d;
                break;
            }
        }
    }
    if(c==0) {
        printf("error\n");
    }
    return sum;
}