#include<stdio.h>
void primefact(int);
int main()
{
   int x;
   printf("enter a number");
   scanf("%d",&x);
   primefact(x);
   return 0;
}
void primefact(int n)
{
  int i;
  for(i=2;n!=1;i++)
  {
      while(n%i==0)
      {
          n=n/i;
          printf("%d,",i);
      }
  }
}
