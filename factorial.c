#include<stdio.h>
int main()
{
    int T;
    int N;
    
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int fact=1;
        scanf("%d\n",&N);
        for(int j=1;j<=N;j++)
    {
        fact*=j;
    }
    printf("%lld\n",fact);
    }
    
    return 0;
}