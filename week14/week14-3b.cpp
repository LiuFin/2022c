#include <stdio.h>
int n,a[100],b[100],j;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=j-1;i>=0;i--){
		printf("%d ",b[i]);
	}
}
