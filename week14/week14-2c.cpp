#include <stdio.h>
int main()
{
	int a[10],fasti=0,speed;
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	for(int i=1;i<10;i++)if(a[fasti]>a[i])fasti=i;
	speed=60*60*1.2/a[fasti];
	printf("%d %d\n",fasti+1,speed);
}
