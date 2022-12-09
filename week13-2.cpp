#include <stdio.h>
int main()
{
	int a[45];
	a[1]=1;
	a[0]=1;
	for(int i=2;i<45;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<45;i++){
		printf("%d ",a[i]);
	}
}
