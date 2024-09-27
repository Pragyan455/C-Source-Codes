#include <stdio.h>

int main()
{
    int n;
    printf("Enter range\n");
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        int a[i];
        printf("a[%d]=\t{",i);
         for (int j=1;j<=i;j++)
        {
            a[j]=j;
            printf("%3d,",a[j]);
        }
       printf("}\n");
    }
    

    return 0;
}
