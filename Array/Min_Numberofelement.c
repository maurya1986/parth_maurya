#include<stdio.h>

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       scanf("%d",&n);
       int a[n],i;
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       int k,l=0;
       scanf("%d",&k);
       for(i=0;i<n;i++)
       {
           if(k>=a[i])
           l++;
       }
       printf("%d",l);
       printf("\n");
   }
	return 0;
}
