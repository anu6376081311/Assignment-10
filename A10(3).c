#include<stdio.h>
int EO(int);
int main()
{
    int x,a;
    printf("Enter a number :");
    scanf("%d",&x);
    a=EO(x);
         printf("%d",a);
    return 0;

}
int EO(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
