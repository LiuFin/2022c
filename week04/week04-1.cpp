#include <stdio.h>
int main()
{
    printf("請輸入西元年:");
    int a;
    scanf("%d",&a);
    if(a%400==0)printf("閏年");
    else if(a%100==0)printf("平年");
    else if(a%4==0)printf("閏年");
    else printf("平年");
}
