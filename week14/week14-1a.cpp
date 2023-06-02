#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n==i*i){
			printf("%d",i);
			m=1;
		}
	}
	if(m!=1)printf("0");
}
