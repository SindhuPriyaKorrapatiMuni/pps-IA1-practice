#include<stdio.h>
float input()
{
  int n;
  printf("enter the value:\n");
  scanf("%d",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n;
  float y=1;
  float e=0.000001;
  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;    
}
void output(float n,float sqrt_result)
{
  printf("the sqrt of given number:%f",sqrt_result);
}
int main()
{
  float n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}