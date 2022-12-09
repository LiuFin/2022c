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
## week10-2_陣列+迴圈/正著印倒著印
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
}
```
# Week11
## week11-1_交換兩數順序
```cpp
#include <stdio.h>
int main()
{
    int a=50,b=80;
    printf("a:%d b:%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("a:%d b:%d\n",a,b);
}
```
## week11-2_交換三數順序
```cpp
#include <stdio.h>
main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
## week11-3_交換更多數順序
```cpp
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
```
## week11-4_暴力法完成交換更多數順序
```cpp
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
```
## week11-3_雙重迴圈完成交換更多數順序
```cpp
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int k=0;k<10-1;k++){
        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
```
# Week12
## week12-1_選擇排序法
```cpp
#include <stdio.h>
int a[5]={1,2,3,4,5};
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)printf("%d ",a[i]);
}
```
## week12-2_統整到目前為止學到的宣告函數
```cpp
#include<stdio.h>
int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]={{10,20,30},{40,50,60}};
}
```
## week12-3_二維陣列
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## week12-3_矩陣加法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
```
# Week13
## week13-1_買賣股票的最佳時機
```cpp
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
```
## week13-2_Fibonacci數列
```cpp
#include <stdio.h>
int main()
{
	int a[45];
	a[1]=1;
	a[0]=1;
	for(int i=2;i<45;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<45;i++){
		printf("%d ",a[i]);
	}
}
```
## week13-3_矩陣轉180度
```cpp
#include <stdio.h>
int a[200][200];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=n-1;i>=0;i++){
        for(int j=m-1;j>=0;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
```
## week13-4_新function函式
```cpp
#include <stdio.h>
int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans=addnum(2,3);
    printf("addnum(2,3)會得到 %d\n",ans);
}
```
