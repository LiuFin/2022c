#include <stdio.h>
int main()
{
    printf("块计耞计琌借计");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d琌借计",n);
    else printf("%dぃ琌借计",n);
}
