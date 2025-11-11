#include <stdio.h>
#include <string.h>
int main()
{
	char zifu[101];
	int shu[101];
	int i,a,b;
	b=1;
	a=0;
	scanf("%100s",zifu);
	for(i=0;i<=100;i++) {
		if(zifu[i]=='1') {
			shu[i]=1;
		} else{
			shu[i]=0;
		}
	}
	for(i=strlen(zifu);i>1;i--) {
		b=b*2;
	}
	for(i=0;i<=100;i++,b=b/2) {
		a=a+b*shu[i];
	}
	printf("%d\n",a);
	return 0;
}