#include<stdio.h>
int main()
{
    int N,num;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num);
    do
    {
        printf("%d ",num%10);
       num/=10;
    }
    while(num!=0);
    printf("\n");
    }
    
    return 0;
}