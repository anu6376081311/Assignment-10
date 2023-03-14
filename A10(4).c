#include<stdio.h>
void Natural(int );
int main()
{
    int x;
    printf("Enter anumber :");
    scanf("%d",&x);
    Natural(x);
    return 0;

}
void  Natural(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
