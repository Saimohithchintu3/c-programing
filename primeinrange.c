#include <stdio.h>
int main()
{
 int a,b,n,i,count;
 scanf("%d%d",&a,&b);
 for(n=a;n<=b;n++)
 {
   count=0;
   for(i=2;i<=n/2;i++)
   {
     if(n%i==0)
     {
       count++;
       break;
     }
   }
   if(count==0 && n>1)
   printf("% d",n);
 }
}