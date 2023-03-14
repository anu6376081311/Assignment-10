#include<stdio.h>
int fun(int,int);
int main()
{
    int x,y,f;
    printf("Enter a number and digit :");
    scanf("%d %d",&x,&y);
    f=fun(x,y);
    printf("%d",f);
    return 0;
}
int fun(int n,int m)
{
    int rem;
    while(n)
    {
        rem=n%10;
        if(rem==m)
        {
            return 1;
            n=n/10;
        }
    }
    return 0;
}
