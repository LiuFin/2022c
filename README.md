# 2022c
資傳一甲劉諭璘-程式設計 的程式倉庫

# Week06
## step01-0
考試九九乘法表，考前複習，考後檢討同學出錯的狀況。
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,i*j);
			}
			printf("\n");
		}
}
```
## step01-1_畫星星
使用的技巧，是先用左手i來建立簡報
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
## step01-2_畫金字塔
使用鷹架建金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i;
        int star=i*2-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d\n",i,space,star);
    }
}
```
## step01-3_暴力法求公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0)ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step01-4_電腦求公因數比較快的方法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step01-5_什麼東西能成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999)printf("-999成立\n");
    if(-3)printf("-3成立\n");
    if(-2)printf("-2成立\n");
    if(-1)printf("-1成立\n");
    if(0)printf("0不成立,所以什麼都沒印\n");
    if(1)printf("1成立\n");
    if(2)printf("2成立\n");
    if(3)printf("3成立\n");
    if(4)printf("4成立\n");
    if(999)printf("999成立\n");
    if("a==0")printf("不管是什麼東西,幾乎都成立\n");
}
```
# Week07
## week07-1_long long int 的用法～可以輸入很大的數字
```cpp
#include <stdio.h>
int main()
{
    int n=123456789123456789;
    printf("%d\n",n);
    long long int m=123456789123456789;
    printf("%lld\n",m);
}
```
## week07-2_long long int 變數的計算
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0&&b%i==0)ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
## week07-3_long long int 變數的計算～輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
## week07-4_分別列出每位數的方法
```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
# Week08
## week08-1_如何只用2個for來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if(k<=n-i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
```
## week08-2_如何只用2個while來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
        int k=1;
        while(k<=n){
			if(k<=n-i)printf(" ");
			else printf("*");
            k++;
		}
		printf("\n");
        i++;
	}
}
```
## week08-3_判斷質數
判斷某個數是不是質數,就看能不能被約分、能不能被整除。被整除, 就不是質數, 所以就這樣反過來想即可
```cpp
#include <stdio.h>
int main()
{
    printf("輸入數字以判斷此數是否為質數");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d是質數",n);
    else printf("%d不是質數",n);
}
```
## week08-4_用for來判斷質數
前一題教完「質數判斷」接下來比較難, 要用for迴圈列出一堆數,再逐一進行「質數判斷」
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2;n<=a;n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0)bad=1;
		}
		if(bad==0)printf("%d ",n);
	}
}
```
# Week10
## week10-1_陣列的用法
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```
