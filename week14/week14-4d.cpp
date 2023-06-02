#include <stdio.h>
int a[5]={1,10,100,1000,10000};
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<5;i++){
	if(n<=0)break;
	int now=n%10;
	printf("%d ",now*a[i]);
	n/=10;
	}
	return 0;
}
