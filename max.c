#include<stdio.h>
int main()
{
    int N,X,max=0;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&X);
        if(i==0 || X>max)
        {
            max=X;
        }
    }
    printf("%d",max);
    return 0;
}