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
int days(char* mnum);
int main()
{
    char mname[16];
    scanf("%s",mname);
    int total=days(mname);
    return 0;
}
int days(char* mnum) {
    int sum=0;
    int c=0;
    for(int i=0;i<12;i++) {
        if(strcmp(mnum,year[i].name)==0) {
            for(int j=0;j<=i;j++) {
                sum=sum+year[i].day;
                c=1;
            }
            break;
        }
    }
    if(c==0) {
        printf("ERROR:%s not found\n",mnum);
    }
    return sum;
}