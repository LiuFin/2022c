#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int>a(2);
    a[0]=100;
    a[1]=101;
    for(int i=0;i<a.size();i++){
        printf("%d ",a[i]);
    }
    printf("現在的 a 的大小是: %d\n",a.size());
}
