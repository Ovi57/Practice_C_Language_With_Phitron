#include<stdio.h>
int main()
{
    int X;
    scanf("%c",&X);
    if(X>='a' && X<='z')
    {
        X=X-32;
    }
    else if(X>='A' && X<='Z')
    {
        X=X+32;
    }
    printf("%c",X);
    return 0;
}