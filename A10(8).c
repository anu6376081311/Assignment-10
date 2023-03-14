#include<stdio.h>
int perm(int,int);
int fact(int);
int main()
{
    int x,y,z;
    printf("Enter the value of x and y :");
    scanf("%d %d",&x,&y);
    z=perm(x,y);
    printf("arrangement is %d",z);
    return 0;

}
int perm(int n,int r)
{
    int p;
    p=fact(n)/fact(r);
    return p;
}
int fact(int n)
{
    int i=1,fact=1;
    for(i;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
