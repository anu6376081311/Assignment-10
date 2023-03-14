#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{
    int x,y,z;
    printf("Enter the value of x,y :");
    scanf("%d %d",&x,&y);
    z=comb(x,y);
    printf("combinations are %d",z);


}
int comb(int n,int r)
{
    int c;
    if(n>r)
    {
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
    }
    else
    {
        return 0;
    }

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

