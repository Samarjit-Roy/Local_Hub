//Swaping two no using call by value
#include<stdio.h>
#include<conio.h>

void swap(int x, int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf("After swaping value of x=%d & y=    %d",x,y);
}

void main()
{
    int a,b;
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    getch();
}