#include <stdlib.h>
int main(int argc, char** argv)
{
    int T,count;
    scanf("%d",&T);
while(T--)
{   
   // count =0 ;
    int N,NUM;
    scanf("%d %d",&N,&NUM);
    int a[N],i;
        for(i=0;i<N;i++){
             scanf("%d",&a[i]); 
		}
        for(i=0;i<N;i++)
        {
            if(a[i] == NUM){
             count=i+1;
             break ;
            }
             else
                count =-1 ;
        }
    printf("%d",count);
    printf("\n");
    
    
}   
    return (EXIT_SUCCESS);
}
