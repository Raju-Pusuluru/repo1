#include<stdio.h>
void main()
{
  int n;
scanf("%d",&n);
int rev =0;
int t =n;
while(n>0)
{
  int rem = n%10;
  rev = rev * 10 + rem;
  n = n/10;
}
 printf("Reverse of  %d is %d\n",t,rev);
}
