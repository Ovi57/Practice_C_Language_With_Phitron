#include<stdio.h>
int main()
{
    int N;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int num;
    scanf("%d",&N);
   for(int i=0;i<N;i++)
   {
    scanf("%d",&num);
   //}
  // for(int i=1;i<=N;i++)
 //  {
    if(num%2==0)
    {
        count1++;
    }
    else
    {
        count2++;
    }
     if(num>0)
    {
        count3++;
    }
    else if(num<0)
    {
        count4++;
    }
   }
   printf("Even: %d\n",count1);
   printf("Odd: %d\n",count2);
   printf("Positive: %d\n",count3);
   printf("Negative: %d\n",count4);
    return 0;
}