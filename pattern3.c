#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(char i='A';i<'A'+N;i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
        
    }
    return 0;
}