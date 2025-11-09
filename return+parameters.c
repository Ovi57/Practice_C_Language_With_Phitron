#include<stdio.h>
int sum(int num1,int num2)
{
int ans=num1+num2;
return ans;
}
int sub(int num1,int num2)
{
int ans=num1-num2;
return ans;
}
int multipication(int num1,int num2)
{
int ans=num1*num2;
return ans;
}
int division(int num1,int num2)
{
int ans=num1/num2;
return ans;
}
int mod(int num1,int num2)
{
int ans=num1%num2;
return ans;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int val1=sum(x,y);
    int val2=sub(x,y);
    int val3=multipication(x,y);
    int val4=division(x,y);
    int val5=mod(x,y);
    printf("%d %d %d %d %d",val1,val2,val3,val4,val5);
    return 0;
}