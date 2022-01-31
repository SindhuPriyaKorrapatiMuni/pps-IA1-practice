#include<stdio.h>
int input()
{
  int a;
  printf("enter a number:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  return a;
  else
  if(b>a&&b>c)
  return b;
  else
  if(c>a&&c>b)
  return c;
}
void output(int a,int b,int c,int l)
{
  printf("the greater of %d,%d and %d:%d",a,b,c,l);
}
int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(a,b,c,l);
  return 0;
}
