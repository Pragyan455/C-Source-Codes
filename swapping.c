#include <stdio.h>
#define max 32 // creating maximum value for each array

int array_length(float arr[]);
void array_print(float arr1[],int arr_len);
void swapping(float arr1[], float arr2[],int arr1_len,int arr2_len);

int main()
{
    float arr1[max]={1.5,2.4,3.3,4.2,5.1};
    float arr2[max]={1.1,2.2,3.3,4.4,5.5};
    
    int arr1_len=array_length(arr1);
    int arr2_len=array_length(arr2);
    
    swapping(arr1, arr2, arr1_len, arr2_len);
    
    return 0;
}

int array_length(float arr[]) // function to calculate array length
{
    int counter=0;
    while(counter<max && arr[counter]!=0) // to increment counter until it finds a zero or reaches maximum value
    {
        counter++;
    }
    return counter;
}

void swapping(float arr1[], float arr2[], int arr1_len, int arr2_len) // function to swap contents
{
    int count=0;
    
    float temp[max]; // temporary variable to store data during swap process
    
    printf("Array 1 (Before swap) : ");
    array_print(arr1, arr1_len); // printing original array
    printf("\nArray 2 (Before swap) : ");
    array_print(arr2, arr2_len); // printing oroginal array
     
    if (arr1_len!=arr2_len) // to check the lengths of both array
    {
        printf("SIZE MISMATCH\n");
    }
    
    for(int i=arr1_len;i>=0;i--)
    {
        temp[count-1]=arr2[i]; // copying contents of array 2 in reverse to temporary array
        count ++;
    }
    
    for(int i=0;i<arr1_len;i++)
    {
        arr2[i]=arr1[i]; // copying contents of array 1 in array 2
    }
    
    for(int i=0;i<arr1_len;i++)
    {
        arr1[i]=temp[i]; // copying contents of temporary array to array 1
    }
    
    printf("\nArray 1 (After swap) : ");
    array_print(arr1,arr1_len); // printing final array
    printf("\nArray 2 (After swap) : ");
    array_print(arr2,arr2_len); // priniting final array
    
}

void array_print(float arr[], int arr_len) // to print arrays
{
    for (int i=0;i<arr_len;i++)
    {
        printf("%.2f\t",arr[i]);
    }
}

