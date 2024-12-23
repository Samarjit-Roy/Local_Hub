//Create a even nad odd question using goto function..
//goto function is a jumping statement..
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no;
    printf("Enter the no to check=");
    scanf("%d",&no);
    if(no%2==0)
    { goto Even;}
    else
    { goto Odd;}
    Even:
    { 
        printf("Even no");
        exit (0);
    }
    Odd:
    {  printf("Odd no");}
    return 0;
}