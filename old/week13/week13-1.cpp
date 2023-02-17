#include <stdio.h>
int main()
{
	int a[30],n,i,j,b,s,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]-a[i]>p){
				s=a[j];
				b=a[i];
				p=s-b;
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",s,b,p);
}
