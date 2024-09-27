#include <stdio.h>

int main()
{
   int m,n;
   printf("enter number of rows\n");
   scanf("%d",&m);
   printf("enter number of columns\n");
   scanf("%d",&n);
   int a[m][n]; // original array
   int b[m][n]; // temporary array 1
   int c[m][n]; // temporary array 2
   for(int i=0;i<m;i++)
   {
       printf("enter elements of row\n");
       for(int j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]); // values input into original array
           c[i][j]=a[i][j]; // copying values for future reference
       }
   }
   

    for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           
          if((i+1)<m) // checking if the address is the last address of the array or not
          {
           b[i][j]=a[i][j]; // copying values in a temporary variable
           a[i][j]=a[i+1][j]; // copying the value of row +1 in the original address of array
           a[i+1][j]=b[i][j]; // copying the value of array in the address of row +1 in original array
          }
          else
          {
           a[i][j]=c[0][j]; // copying the value of the address of last array to that of the first
          }
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
    return 0;
}
