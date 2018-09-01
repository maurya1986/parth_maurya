/*This is the programming about the 2D array*/

#include<stdio.h>
#include<stdio.h>

int main()
{
int N ;
    scanf("%d",&N);
    int arr[N],i;
    for(i=0;i<N;i++)
        scanf("%d", &arr[i]);
    for(int i=0;i<N;i++)
        printf("%d",arr[N-i]);
    printf("\n");

    return 0 ;
    }
