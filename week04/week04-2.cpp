#include <stdio.h>
int main()
{
    int a=10;
    printf("a�b���̡H %d\n",&a);
    int *p=&a;
    printf("����p�߲z�񪺭ȬO&a�A�]�N�O%d\n",p);
    printf("p���쪺���@�Ӳ��l���ȬO�G%d\n",*p);
}
