#include<stdio.h>
int i(int x,int y)
{
int c;
c=x+y;
return(c);
}
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
int result=i(a,b);
printf("result is %d\n",result);
return 0;
}
