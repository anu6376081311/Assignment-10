#include<stdio.h>
int fact(int);
int main()
{
    int x,f;
    printf("Enter anumber :");
    scanf("%d",&x);
    f=fact(x);
    printf("The factorial of %d is ",f);
    return 0;

}
int fact(int n)
{
    int F=1;
    for(int i =1;i<=n;i++)
    {
        F=F*i;
    }
    return F;
}
