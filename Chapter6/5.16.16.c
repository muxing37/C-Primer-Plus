#include <stdio.h>
int main()
{
    double da=100,de=100;
    int c=0;
    while(de<=da) {
        c++;
        da=100*0.1+da;
        de=de*1.05;
    }
    printf("需要%d年,Deirdre的投资额为%.2lf,Daphne的投资额为%.2lf\n",c,de,da);
    return 0;
}