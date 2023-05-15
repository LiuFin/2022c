#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>9999)printf("%d",n/1000%10);
	else printf("%d",n/1000);
}
