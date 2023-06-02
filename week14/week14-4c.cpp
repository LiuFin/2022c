#include <stdio.h>
int main()
{
	int ans=1,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)ans+=(2*i+1);
	printf("f(%d)=%d",n,ans);
}
