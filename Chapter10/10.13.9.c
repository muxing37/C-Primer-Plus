#include <stdio.h>
void copy(int n,int m,double t[n][m],double s[n][m]);
void print(int n,int m,double arr[n][m]);
int main()
{
    double s[3][5] = {
        {1,2,3,4,5},
        {6.6,7.7,8.8,9.9,11.11},
        {11.2,12.3,13.4,14.5,15.6}
    };
    double t[3][5];
    printf("原始数组：\n");
    print(3,5,s);
    copy(3,5,t,s);
    printf("\n复制后的数组：\n");
    print(3,5,t);
    return 0;
}

void copy(int n,int m,double t[n][m],double s[n][m]) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            t[i][j]=s[i][j];
        }
    }
}

void print(int n, int m,double arr[n][m]) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%6.2f ",arr[i][j]);
        }
        printf("\n");
    }
}