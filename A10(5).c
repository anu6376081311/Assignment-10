#include<stdio.h>
void OddNatural(int);
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    OddNatural(x);
    return 0;

}
void OddNatural(int n)
{
    for(int i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
}
