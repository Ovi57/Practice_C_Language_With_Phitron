#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(i%5==0)
        {
            printf("%d Yess\n",i);
        }
        else{
            {
            printf("%d N0\n",i);
        }
        }
    }

}