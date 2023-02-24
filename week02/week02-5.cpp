//#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	long long int a,b;
	//while(scanf("%lld%lld",&a,&b)==2){
	while(cin>>a>>b){
		long long int ans=b-a;
		if(ans<0)ans=a-b;
		//printf("%lld\n",ans);
		cout<<ans<<endl;
	}
}
