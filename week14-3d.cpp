#include <stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	printf("%lld,%lld,%lld,%lld,%lld",n/1000000000000,n%1000000000000/1000000000,n%1000000000/1000000,n%1000000/1000,n%1000);
}
