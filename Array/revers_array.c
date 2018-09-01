nclude <stdio.h>
#include <stdlib.h>
#define INDEX    5

void reverse_array(int b[],int N)
{
    int i,tmp;
    for(i=0;i<N/2;i++)
    {
        tmp =b[i];
        b[i]=b[N-i];
        b[N-i]=tmp;
    }
    //return *b;
}


int main()
{  
    int i,j,arr[INDEX];
    for(i=0 ; i<INDEX;i++)
          scanf("%d",&arr[i]);
//#if 0 
 /*This contain the O(2N) Time complexity*/
       j=i-1;
    for(i=j;i>=0;i--)
        printf("%d ",arr[i]);
//#endif   

//#if 0       
 /*This contain the O(N/2) Time complexity*/      
   reverse_array(arr,INDEX) ;   
for(j=1;j<=INDEX;j++)
          printf("%d ",arr[j]); 
//#endif   
    return EXIT_SUCCESS;
}



