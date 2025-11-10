#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int star=1;
    int space=N-1;
    for(int i=0;i<N;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }
   
    
    space = 0;
    star -= 2; 
     for(int i=N-1;i>=0;i--)
    {
        for(int j=0;j<space;j++)
        {
            printf(" ");
        }
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        space++;
        star-=2;
    }
    return 0;
}