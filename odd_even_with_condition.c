#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            printf("%d - Odd Number\n",i);
        }
        else{
            printf("%d - Even Number\n",i);
        }
    }
}