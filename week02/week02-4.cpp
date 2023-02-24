///#include <stdio.h>
#include <iostream>
int main()
{
	long long int a,b;
	///while(scanf("%lld%lld",&a,&b)==2){
	while(std::cin>>a>>b){
		long long int ans=b-a;
		if(ans<0)ans=a-b;
		///printf("%lld\n",ans);
		std::cout<<ans<<std::endl;
	}
}
