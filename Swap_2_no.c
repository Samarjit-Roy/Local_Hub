#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two no=");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("New Swap value=%d %d",a,b);
    return 0;
}