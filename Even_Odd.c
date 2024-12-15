//Check wheather enter the no is even or odd in c language...
#include<stdio.h>
int main()
{
    int no,b,c;
    printf("Enter the no=");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("The no %d is even no",no);
    }
    else
    {
        printf("The no %d is odd no",no);
    }
}