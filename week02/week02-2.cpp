#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		int ans;
		if(a>b)ans=a-b;
		if(b>a)ans=b-a;
		printf("%d\n",ans);
	}
}
