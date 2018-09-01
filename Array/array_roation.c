/* This contain time complexity O(2N) */
#include <stdio.h>
#include <stdlib.h>

void reverse_array(int array_reverse[],int N);

void array_rotation_Number(int array_reverse[],int N, int d)
{
    for(int i =0 ;i<d;i++)
    reverse_array(array_reverse,N);
}   
void reverse_array(int array_reverse[],int N)
{
    int temp ,i ;
    temp = array_reverse[0];
    for(i=0;i<N-1;i++)
        array_reverse[i]=array_reverse[i+1];
    array_reverse[i]=temp;
   
    //return *array_reverse;
    
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",arr[i]);
}

    
int main()
{  
    int d = 2 ;
    int array_reverse[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(array_reverse)/sizeof(array_reverse[0]);
    array_rotation_Number(array_reverse,len,d);
    printArray(array_reverse,len);
    return EXIT_SUCCESS;
}



