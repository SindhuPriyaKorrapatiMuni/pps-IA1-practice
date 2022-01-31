#include<stdio.h>
int input()
{
  int n;
  printf("enter the array size:\n");
  scanf("%d",&n);
  return n;
}
void array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("enter the array elements:\n");
      scanf("%d",&a[i]);
    }
}
int add(int n,int a[10])
{
  int i,sum=0;
  for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
void output(int sum)
{
 printf("the sum of numbers:%d",sum); 
}
int main()
{
  int n,sum,a[10];
  n=input();
  array(n,a);
  sum=add(n,a);
  output(sum);
  return 0;
}