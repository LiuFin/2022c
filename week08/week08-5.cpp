#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int space=n-i-1;
		int star=1+i*2;
		for(int j=space;j>0;j--){
			printf(" ");
		}
		for(int k=0;k<star;k++){
			printf("*");
		}
		printf("\n");
	}
}

