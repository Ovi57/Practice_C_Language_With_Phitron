#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

   int d=N/10;
   int r=N%10;
   if(r!=0 && d%r==0 )
   {
    printf("YES");
   }
   else if(d!=0 && r%d==0 )
   {
    printf("YES");
   }
 
   else{
    printf("NO");
   }

    return 0;
}