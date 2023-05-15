#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	if(n%m==0)printf("%d",n/m);
	else printf("%d",n/m+1);
}
