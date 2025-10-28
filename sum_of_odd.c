#include<stdio.h>
int main()
{
    int T,X,Y;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int sum=0;
        scanf("%d %d\n",&X,&Y);
         if (X > Y) { 
            int temp = X;
            X = Y;
            Y = temp;
        }

        for(int j=X+1;j<Y;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
           
        }
         printf("%d\n",sum);
    }
    
    return 0;
}