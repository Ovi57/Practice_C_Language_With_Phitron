#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X<0)
    {
       X=-X; 
    }
    while(X>=10)
    {
        X/=10;
    }
    if(X%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}