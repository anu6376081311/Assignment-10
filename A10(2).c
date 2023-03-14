#include<stdio.h>
int SI(int,int,int);
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c ;");
    scanf("%d %d %d",&a,&b,&c);
    d=SI(a,b,c);
    printf("Simple interest is %d",d);
    return 0;

}
int SI(int p,int r,int t)
{
    int si;
    si=(p*r*t)/100;
    return si;
}
