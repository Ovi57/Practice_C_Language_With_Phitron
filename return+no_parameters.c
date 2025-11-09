#include<stdio.h>
int sum()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int ans=num1+num2;
return ans;
}
int sub()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int ans=num1-num2;
return ans;
}
int multipication()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int ans=num1*num2;
return ans;
}
int division()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int ans=num1/num2;
return ans;
}
int mod()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int ans=num1%num2;
return ans;
}
int main()
{
    
    int val1=sum();
    int val2=sub();
    int val3=multipication();
    int val4=division();
    int val5=mod();
    printf("%d\n%d\n%d\n%d\n%d\n",val1,val2,val3,val4,val5);
    return 0;
}