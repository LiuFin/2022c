#include <stdio.h>
int f(int n)
{
	int b=0;
	while(n){
		b=b*10+n%10;
		n/=10;
	}
	return b;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",f(a));
}
