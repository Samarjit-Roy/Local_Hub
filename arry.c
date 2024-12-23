//Create a table and showing the table answer to output using arry...
#include<stdio.h>
#define size 11
int main()
{
    int i,no,d,ans[size];
    printf("Enter thr no to display table=");
    scanf("%d",&no);
    for(i=1;i<size;i++)
    {
        printf("%d*%d=%d\n",no,i,ans[no*i]);

    }
}