#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the numbers:");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i=0,sum=0;
  for(i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("the sum of numbers:%d",sum);
}
int main()
{
  int n,sum,i;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}